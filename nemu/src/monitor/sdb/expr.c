/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdio.h>
#include <memory/paddr.h>
#define MAX 1000000
enum {
  TK_NOTYPE = 256,
  REGISTER=257,
  HEX=258,
  NUM=259,
  EQ=1,
  N_EQ=2,
  Not=7,
  And=8,
  Or=9,
  Sub=100,
  Negetive=11,
  Mul=12,
  Point=13,
  Big_Or_EQ=14,
  Less_Or_EQ=15,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE}, // 匹配到空格，+表示表示前面的元素（即空格）可以出现一次或多次

    {"\\+", '+'}, // plus
    {"\\-", '-'}, // sub
    {"\\*", '*'}, // mul
    {"\\/", '/'}, // div
    {"\\%", '%'},

    {"\\(", '('},
    {"\\)", ')'},

    {"\\=\\=", EQ},
    {"\\!\\=", N_EQ},
    {">=", Big_Or_EQ},
    {"<=", Less_Or_EQ},
    // 逻辑符号
    {"\\!", Not},
    {"\\&\\&", And},
    {"\\|\\|", Or},

    {"\\$(pc|[a-zA-Z]*[0-9]*)", REGISTER},
    {"0[xX][0-9a-fA-F]+", HEX},
    {"[0-9]*", NUM},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i=0;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

bool is_operator(char ch) {
    return ch == '+' || ch == 100 || ch == '*' || ch == '/' || ch == '(' || ch == ')';
}
typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[MAX] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
   memset(tokens, 0, sizeof(tokens));
   nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
       char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

       Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        Token tmp_token;
        switch (rules[i].token_type) {
            //四则运算
        case'+':
            tmp_token.type = '+';
                tokens[nr_token++] = tmp_token;
                break;
          case'%':
            tmp_token.type = '%';
                tokens[nr_token++] = tmp_token;
                break;      
          
        case'-':
      	 if((nr_token==0)||(nr_token>0&&tokens[nr_token-1].type=='('))
      	 //-1+2,(-1)+2,((1))-2,((8))-(-2)
      	  {
      	  tokens[nr_token].type = Negetive; // 负号
      	
      	  }
      	  else{
      	   tokens[nr_token].type = Sub; //jian  
      	     	 
            }
          nr_token++;
            break;
            
  
            
            
        case'*'://*(a),*0x12
                 if (nr_token== 0 || (nr_token > 0 && (tokens[nr_token-1].type == '(' || 
                                   tokens[nr_token-1].type == '+' || 
                                   tokens[nr_token-1].type == Sub || 
                                   tokens[nr_token-1].type == Mul || 
                                   tokens[nr_token-1].type == '/' || 
                                   tokens[nr_token-1].type == EQ || 
                                   tokens[nr_token-1].type == N_EQ || 
                                   tokens[nr_token-1].type == Not || 
                                   tokens[nr_token-1].type == And || 
                                   tokens[nr_token-1].type == Or))) 
           {
            tokens[nr_token].type = Point; // jie
          //  printf("jie");
       
      	    
           }
           else
           {
            tokens[nr_token].type = Mul; // cheng
           // printf("cheng");
           }
            
           nr_token++; 
             break;   
            
            
            
            
            
            
        case'/':
            tmp_token.type = '/';
            tokens[nr_token++] = tmp_token;
            break;
        case Not:
            tmp_token.type = Not;
            tokens[nr_token++] = tmp_token;
            break;

        case'(':
            tmp_token.type = '(';
            tokens[nr_token++] = tmp_token;
            break;

        case')':
            tmp_token.type = ')';
            tokens[nr_token++] = tmp_token;
            break;

        case TK_NOTYPE:
            break;

        case EQ:
            tokens[nr_token].type = EQ;
            strcpy(tokens[nr_token].str, "==");
            nr_token++;          
            break;
            
       case Big_Or_EQ:
            tokens[nr_token].type = Big_Or_EQ;
            strcpy(tokens[nr_token].str, ">=");
            nr_token++;          
            break;
       case Less_Or_EQ:
            tokens[nr_token].type = Less_Or_EQ;
            strcpy(tokens[nr_token].str, "<=");
            nr_token++;          
            break;
      
        case N_EQ:
            tokens[nr_token].type = N_EQ;
            strcpy(tokens[nr_token].str, "!=");
            nr_token++;
            break;
        
	      case Or:
            tokens[nr_token].type = Or;
            strcpy(tokens[nr_token].str, "||");
            nr_token++;          
            break;
        case And:
            tokens[nr_token].type = And;
            strcpy(tokens[nr_token].str, "&&");
            nr_token++;
            break;
        

	case NUM: 
            tokens[nr_token].type = 259;
            strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
            nr_token++;
            break;
        case REGISTER: // regex
            tokens[nr_token].type = 257;
            strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
            nr_token++;
            break;
        case HEX: // HEX
            tokens[nr_token].type =258;
            strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
            nr_token++;
            break;
          default: TODO();
        }

        break;
      }
    }

   if (i == NR_REGEX) {
     printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}


//(8+9)+(1+1)不需要
//有一对括号包含所有
bool check_parentheses(int p, int q){//是否需要进行脱去括号
	int a;
	int j = 0, k = 0;
	if (tokens[p].type == '(' || tokens[q].type == ')'){
		for (a = p; a <= q; a++){
			if (tokens[a].type == '('){
				j++;
			}
			if (tokens[a].type == ')'){
				k++;
			}
			if (a != q && j == k){//没有a遍历完就有括号匹配，说明括号是部分包裹
				return false;
			}
		}
		if (j == k){//正常情况下，遍历完左右括号相等
				return true;
			} 
    else
    {
				return false;
		}
  }
	return false;
}



int Find_main_operator(int p, int q) {
    int paren_depth = 0;  // 当前括号嵌套深度
    int op = -1;        
    int current_pri = -1; 

  //进来的是（2+2）*（7+1）
    for (int i = q; i >=p; i--) {//先过滤括号
     
        if (tokens[i].type == '(') {
            paren_depth++;
        }
        if (tokens[i].type == ')') {
            paren_depth--;
        }
        if (paren_depth != 0) {
            continue;
        }
  
        int new_pri = -1;
        switch (tokens[i].type) {//u不断进行a选择符号优先级
            case Or:     new_pri = 5; break;//最先递归的
            case And:    new_pri = 4; break;
            
            case '+':
            case Sub:    new_pri = 3; break;
            
            case EQ:
            case Big_Or_EQ:
            case Less_Or_EQ:
            case N_EQ:   new_pri = 2; break;   
                     
            case Mul:
            case '%':
            case '/':    new_pri = 1; break;
            
            case Point:
            case Not:
            case Negetive: new_pri = 0; break;  // 优先级最高
            default:     new_pri = -1; break; // 非运算符
        }
    
        
        if (new_pri != -1 && new_pri > current_pri) {
            op = i;
            current_pri = new_pri;
           
        }
    }
  if (paren_depth != 0) {
        return -2;
    }

    return op;
}



int eval(int p, int q){

	int result = 0;
	int op;
	int val1, val2;


	if (p > q){
		assert(0);
	} 
	
	
	else if (p == q){//最后找到的数字,16进制，寄存器
		if (tokens[p].type == NUM)
		{
			sscanf(tokens[p].str, "%d", &result);
			return result;
		} 
		else if (tokens[p].type == HEX)
		{
		   return strtol(tokens[p].str, NULL, 16);//把16进制转化为10进制
		}
		
   else if (tokens[p].type == REGISTER)
   {

  	  bool flag = false;
	   	int tmp = isa_reg_str2val(tokens[p].str, &flag);
	    if(flag)
	    {

       // printf("0x%08x\n", tmp);
        return tmp;
      }
	 	  else
	 	  {
			 printf("error. \n");
			 assert(0);
			}
		}

	}
	else if (check_parentheses(p, q) == true){
	
	 	return eval(p + 1, q - 1);
	 } 
	else {
		op = Find_main_operator(p, q);//op为运算符的索引位置				
		
	 	if (op == -2){
	 	printf("表达式不合理\n");
			assert(0);
		}
		//-1-(-1)
		  val2 = eval(op + 1, q);//先递归右边的
		    
	     if (tokens[op].type == Point || tokens[op].type == Negetive) {
		    int val = eval(op + 1, q); // 计算右侧表达式值
		    if (tokens[op].type == Point) {		  
		        // 解引用：读取内存地址内容
		        return paddr_read(val, 4); // 假设读取4字节
		    } else 
        {       
		        return -val;
		    }
		} 
	     if(tokens[op].type == Not)
	     {
	      int val = eval(op + 1, q);
	       return !val;
	     }

		val1 = eval(p, op - 1);
		
		
		switch (tokens[op].type){
			case '+' : return val1 + val2;	
			case Sub : return val1 - val2;
			case Mul : return val1 * val2;
			case '%':  return val1 % val2;		
			case '/' : 
			if(val2==0)
			{
			printf("被除数不能为0\n");
			assert(0);
			}
			return val1 / val2;			
			case Or : return val1 || val2;
			case And : return val1 && val2;
			case EQ : 
				   if (val1 == val2){
					return 1;
				   } else {
					return 0;
				   }
			case N_EQ :
				   if (val1 != val2){
					return 1;
				    } else {
					return 0;
				    }
			case Big_Or_EQ :
				   if (val1 >= val2){
					return 1;
				    } else {
					return 0;
				    }				    
			case Less_Or_EQ:
				   if (val1 <= val2){
					return 1;
				    } else {
					return 0;
				    }				    
				    
			default : assert(0);
		}
	 
	}
	return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  else
  *success=true;
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  //
  unsigned Result=0;
	Result=eval(0,nr_token-1);
 
  printf("Hex:0x%08x\n", Result); // 单独寄存器，十六进制输出

  
    printf("Dec:%u\n", Result); // 其他情况，十进制输出
  
  return Result;
}
