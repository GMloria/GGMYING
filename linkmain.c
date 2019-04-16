#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct LNode)
#include "linkedList.h"
int main()
{
    void printList(LinkedList *L,int len);
  InitList head=NULL;
   int m,n,r,q,x;
   head=Listcreate();
   L=head;
    show(L);

    DestroyList(LinkedList *L);
    show(L);
printf ("请输入在第%d节点后插入%d节点",m,n);
scanf ("%d %d",&m,&n);
InsertList(m,n);
show (L);

printf ("删除数据域为%d的节点%d",x,r);
scanf("%d",&r);
DeleteList(r,x);
show (L);

TraverseList(L,printList);
show (L);

printf ("请输入要查找的数:");
scanf("%d",&q);
SearchList(L,q);
show (L);

IsLoopList(L);
if(IsLoopList(L)==SUCCESS)
    printf("链表存在循环结构");
else
   printf("链表不存在循环结构");
system("pause");
}
