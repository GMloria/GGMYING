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
printf ("�������ڵ�%d�ڵ�����%d�ڵ�",m,n);
scanf ("%d %d",&m,&n);
InsertList(m,n);
show (L);

printf ("ɾ��������Ϊ%d�Ľڵ�%d",x,r);
scanf("%d",&r);
DeleteList(r,x);
show (L);

TraverseList(L,printList);
show (L);

printf ("������Ҫ���ҵ���:");
scanf("%d",&q);
SearchList(L,q);
show (L);

IsLoopList(L);
if(IsLoopList(L)==SUCCESS)
    printf("�������ѭ���ṹ");
else
   printf("��������ѭ���ṹ");
system("pause");
}
