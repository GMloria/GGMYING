#include<stdio.h>
#include<stdlib.h>
#include"LQueue.h"
int n;
int InitLQueue(LQueue *Q)
{ 
    n=1;
    Q=(Node*)malloc(sizeof(Node));
    Q->front->next=NULL;
}
 Status IsEmptyLQueue(const LQueue *Q)
 { 
     n=2;
    if(Q->front==Q->rear)
    {
	   printf("该队列为空"); 
       return TRUE;
    }
    else
    {
        printf("队列不为空");
        return FALSE;
    }
 }
 Status GetHeadLQueue(LQueue *Q, int *e)
 {
     n=3;
     if(IsEmptyLQueue(Q)==TRUE)
       {printf("该队列为空");
       return FALSE;}
    else
    { 
        Node *p;
        p=Q->front->next;
        *e=p->data;
        printf("对头元素为:");
        printf("%d",*e);
        return TRUE;
    } 
 }
 int LengthLQueue(LQueue *Q)
 { 
     n=4;
     if(IsEmptyLQueue(Q)==TRUE)
       {printf("该队列为空");
       return FALSE;}
       else
     {  
        Q->length=0;
        while(Q->front->next != NULL) {
           Q->length++;
           Q->front=Q->front->next;
     }
        printf("队列长度为:");
        printf("%d",Q->length);
     }
 }
Status EnLQueue(LQueue *Q, int *data)
{ 
    n=5;
    if(IsEmptyLQueue(Q)==TRUE)
       {printf("�ö���Ϊ��"); 
       return FALSE;}
    else
    {
        Node *q;
        q=(Node*)malloc(sizeof(Node));
        Q->length++;
        Q->rear->next=q;
        q->data=(*data);
        q->next=NULL;
         return TRUE;
    }
}
Status DeLQueue(LQueue *Q)
{
    n=6;
    if (IsEmptyLQueue(&Q)) {
        return FALSE;
    }
    else
    {    
       Node *p;
       p=Q->front;
       Q->front=Q->front->next;
       free(p);
       return TRUE;
    }
}
Status TraverseLQueue(const LQueue *Q)
{
    n=7;
    if (IsEmptyLQueue(&Q)) 
       return FALSE;
       else
       {
           Node *P;
           P=Q->front;
           while(P->next!=NULL){
               printf("%d ",P->data);
               P=P->next;
               return TRUE;
           }
       }
}
void ClearLQueue(LQueue *Q)
{
    n=8;
   if (IsEmptyLQueue(&Q)) 
       return FALSE;
    else
   {
       Q->rear=Q->front->next;
       free(Q->front);
       Q->front=Q->rear;
       return TRUE;
   }
}
void DestoryLQueue(LQueue *Q)
{
    n=9;
    Node *p,*s;
     p=Q->front;
     s=p->next;
    while (s->next!=NULL)
    {
        free(p);
        p=s;
        s=p->next;
    }
}
