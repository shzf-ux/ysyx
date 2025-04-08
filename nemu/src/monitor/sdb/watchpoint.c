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

#include "sdb.h"
#include <string.h>
#include <stdio.h>

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[1000000];
  int old_value;
  int new_value;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp()
{
    if(free_==NULL)
    {
        printf("No available watchpoints\n");
        assert(0);

    }
    WP * new_node=free_;//提取空闲的头结点
    free_=free_->next;//空闲链表头部

    new_node->next=head;
    head=new_node;//头插法插入head链表

    new_node->expr[0]='\0';
    new_node->new_value=0;
    new_node->old_value=0;
    
    return new_node;
    

}
void free_wp(WP*wp)
{
    if(wp==NULL)
    {
        return;
    }
    //管理head节点
    //如果释放的是头结点
    if(wp==head)
    {
        head=head->next;
    }
    else //中间节点
    {
        WP* prev=head;
        while (prev!=NULL&&prev->next!=wp) {
        prev=prev->next;
        }//循环结束说明prev指向wp

        if(prev==NULL)
        {
            assert(0);
        }
        prev->next=wp->next;
    }
//把该节点插入空闲的free_链表中

    //使用头插法
    wp->next=free_;
    free_=wp;

}
//展示监视点的信息

void sdb_watchpoints_display()
{
    if(head==NULL)
    {
        printf("no watchpoints\n");

    }
    for (WP*p=head; p!=NULL; p=p->next) {
    printf("Watchpoint: %d  %s\n",p->NO,p->expr);
    printf("Old value 0x%08x\n",p->old_value);
    printf("New value 0x%08x\n",p->new_value);
    }
}

void creat_watchpoints(char*args)
{
    if(args==NULL||*args=='\0')//检查参数
    {
        printf("no args\n");

    }
    WP *wp = new_wp();
    if (wp == NULL)//检查节点
    {
    printf("Error: No free watchpoints available.\n");
    return;
    }

    strcpy(wp->expr,args);
  bool success=false;
  wp->old_value=expr(wp->expr,&success);
  
  
 printf("Watchpoint: %d created: %s = %u (0x%08x)\n", 
           wp->NO, wp->expr, wp->old_value, wp->new_value);
}

// 删除指定编号的监视点
void delete_watchpoint(int no) {
  WP *target = NULL;//用来储存
  
  // 遍历查找目标节点
  for (WP *p = head; p != NULL; p = p->next) {
    if (p->NO == no) {
      target = p;
      break;
    }
  }

  if (target == NULL) {
    printf("Error: Watchpoint %d not found.\n", no);
    return;
  }
  // 释放监视点
  free_wp(target);
  printf("Deleted watchpoint %d\n", no);
}
void find_value_change() // 在cpu_exec()的每次循环中都进行检查,
{
   for (WP *p = head; p != NULL; p = p->next) {
   
    bool success;
    p->new_value = expr(p->expr, &success);//每次检查时计算表达式的值，放到新的里面，看是否改变
    
    if (!success) {
     printf("error\n");
    }

    if (p->new_value!= p->old_value) {//一旦改变就更改state的值
      printf("Watchpoint %d: %s\n", p->NO, p->expr);
      printf("Old value = %u (0x%08x)\n", p->old_value, p->old_value);
      printf("New value = %u (0x%08x)\n", p->new_value, p->new_value);
      
      // 触发暂停
      nemu_state.state = NEMU_STOP;
      p->old_value = p->new_value; // 更新记录值
      printf("Triggered the watchpoint\n");
    }
  }
  



}


