#include<stdio.h>
#include<stdlib.h>
#include"BinaryTree.h"

Status InitBiTree(BiTree *T)
{
    *T = NULL;
    return SUCCESS;
}
Status DestroyBiTree(BiTree *T)
{
   if((*T)->lchild != NULL)
      DestroyBiTree(&(*T)->lchild);
    if((*T)->rchild != NULL)
      DestroyBiTree(&(*T)->rchild);
    free(*T);
    *T = NULL;
    return SUCCESS;
}
Status CreateBiTree(BiTree T)
{
   char data;
   scanf("%s",&data);
   if(data=='#'||data=='\n')
      return ERROR;
  else
  {
    T=( BiTNode*)malloc(sizeof (BiTNode));
    T->data=data;
    T->lchild=CreateBiTree(T->lchild);
    T->rchild=CreateBiTree(T->rchild);
    return SUCCESS;
  }
}
Status PreOrderTraverse(BiTree T, Status (*visit)(TElemType e))
{
    if(T != NULL)
    {
     { 
        visit(T->data);
        printf("%c ",T->data);
        PreOrderTraverse(T->lchild,visit);
        PreOrderTraverse(T->rchild,visit);
     }
     return SUCCESS;
    } 
    else
    {
      return ERROR;
    }
}
Status InOrderTraverse(BiTree T, Status (*visit)(TElemType e))
{
  if(T != NULL)
  {
  	{ 
     InOrderTraverse(T, visit);
     visit(T->data);
     printf("%c ",T->data);
     InOrderTraverse(T, visit);
     }
   return SUCCESS;
 } 
   else
   {
     return ERROR;
   }
Status PostOrderTraverse(BiTree T, Status (*visit)(TElemType e))
{
 if (T != NULL) 
 {
 {
   PostOrderTraverse(T->lchild, visit);
   PostOrderTraverse(T->rchild, visit);
   visit(T->data);
   printf("%c ",T->data);
 }
 return SUCCESS;
 } 
 else
 {
   return ERROR;
 }
}
Status Visit(TElemType e)
{
	printf("%c\n", e);
	return SUCCESS;
}
void InitAQueue(AQueue *Q)
{    
	Q->front = 0;
	Q->rear = 0;
	Q->length = 0;
}
Status IsEmptyAQueue(AQueue *Q)
{
    if(Q->front == Q->rear)
        {printf("队列为空");
        return SUCCESS;
        } 
    else
    {
        printf("队列不为空");
        return ERROR;
    }
}
Status GetHeadAQueue(AQueue *Q)
{
    if(IsEmptyQueue(Q) == SUCCESS)
    return ERROR;
    else
    {
    	char *e; 
        e = Q->data[Q->front];
        return SUCCESS;
    }
}
Status EnAQueue(AQueue *Q, int *data)
{  
        Q->rear++;
        Q->length++;
        Q->data[Q->rear] = (*data);
        while(IsEmptyAQueue(Q))
        {
            printf("入队后的队列为:",Q->data[Q->front++]);
        }
}
Status DeAQueue(AQueue *Q)
{
        int m;
        m = Q->data[Q->front];
        Q->front++;
        return SUCCESS;
        while(IsEmptyAQueue(Q))
        {
            printf("出队后的队列为:",Q->data[Q->front++]);
        }
}
Status LevelOrderTraverse(BiTree T, Status (*visit)(TElemType e));
{
   if(T != NULL)
  {
    AQueue q;
    BiTNode *p;
    InitAQueue(&q);
    EnAQueue(&q,T);
    while(IsEmptyAQueue(q) != ERROR)
    { 
       p=GetHeadAQueue(&q);
       visit(p->data);
       printf("%c ",p->data);
       DeAQueue(&q);
       if(p->lchild!=NULL) 
         EnAQueue(&q,p->lchild);
       if(p->rchild!=NULL) 
         EnAQueue(&q,p->rchild);
     }
     return SUCCESS;
   }
    else
    {
      return ERROR;
    }
} 
}
