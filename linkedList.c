#include<stdio.h>
#include<stdlib.h>
#include"Linkedlist.h"
#define len sizeof(LNode)
#define OVERFLOW -1

Status InitList(LinkList *L)
 {
     L=(LNode*)malloc(sizeof(LNode));
     if(L==NULL)
     {
         printf("OVERFLOW");
         exit(-1);
     }
     L->data=0;
     L->next=NULL;
     return L;
 }
 Status Listcreate(LinkedList *L int len)
  {
  LinkedList p,q;
  L->next=NULL;
  q=L;
  printf("请输入%d个数据\n",len);
  for(int i=1;i<=len;i++)
  {
  p=(LinkList)malloc(sizeof(LNode));
  scanf("%d",&p->data);
  q->next=p;
  q=q->next;
  }
  p->next=NULL;
   }
   void printList(LinkedList *L,int len)
   {
    LinkedList p;
    p=L;
    if(L!=NULL)
    do{
        printf("%d",p->data);
        p=p->data;
    }while(p==NULL);
   }

 void DestroyList(LinkedList *L)
 {
     LNode *p,*q;
     q=L;;
     while(q!=NULL)
     {
     P=q;
     q=q->next;
     free(p);
     }
     free(q);
     return SUCCESS;
 }
Status InsertList(LNode *p, LNode *q)
{
    LNode *head;
    head=(LNode*)malloc(sizeof(LNode));
  if(p==NULL)
     p=q;
  else
    {
      q->next=p->next;
      p->next=q;
    }
    return SUCCESS;
}
Status DeleteList(LNode *p, ElemType *e)
{

 LNode *q;
 q=p->next;
 e->data=p->data;
 if(p!=NULL)
 {
   p->next=q->next;
   free(q);
 }
 else
    q=p->next;
 return head;
}
void TraverseList(LinkedList L, void (*visit)(ElemType e))
{
    void printList(LinkedList *L,int len);
    LinkedList p=L;
    while(p!=NULL)
    {
        visit(&(p->data));
        p=p->next;
    }
    return SUCCESS;
}
Status SearchList(LinkedList L, ElemType e)
{
    LinkedList p,q;
    p=L;
    while(p!=NULLL)
    {
        if(p->data==e)
          q=p;  break;
         else
            p=p->next;
    }
    return q;
}
Status ReverseList(LinkedList *L)
{
LinkedList head,p,q,pr;
p=head->next;
q=NULL;
head->next=NULL;
while(p!=NULL)
{
  pr=p->next;
  p->next=q;
  q=p;
  p=pr;
}
head=p;
return head;
}
Status IsLoopList(LinkedList L)
{
LinkedList head,fast,slow;
LinkedList fast=head;
LinkedList slow=head;
while(fast!=NULL)
{
    if(fast->next!=NULL)
    {
        fast=fast->next;
    }
    fast=fast->next;
    slow=slow->next;
    if(fast==slow)
    {
        return SUCCESS;
        break;
    }
}
if(fast=NULL)
    return ERROR;
}
