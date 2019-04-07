#include<stdio.h>
#include"AQueue.c"
#include"AQueue.h"
int main ()
{
	AQueue  *Q;
    int i,n,num;
    int size;
    int m;
    int *q,*p,*s;
    printf("队列的长度为:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {   printf("数组元素的第%d个数为：",i);
        scanf("%d",&m);
        (*q)=m;
        EnAQueue(&Q, *q);
        i++;
    }
    printf("队列为:");
    for(i=0;i<size;i++)
       {
       	num=Q->data[Q->front];
	   printf("%d ",num);
	   Q->front++;
       }
       printf("请输入你的选择:");
       scanf("%d",&n);
 switch (n)
 {
     case 1:
         InitAQueue(&Q);
         printf("队列初始化成功");
         break;
    case 2:
         IsEmptyAQueue(&Q);
         break;
    case 3:
          IsFullAQueue(&Q);
          break;
    case 4:
          GetHeadAQueue(&Q,s);
          if(GetHeadAQueue(&Q,s)==TRUE)
              printf("队头元素为:");
              printf("%d",*s);
           break;
    case 5:
         LengthAQueue(&Q);
         break;
    case 6:
         printf("想要入对的数据为:");
           scanf("%d",&(*p));
           EnAQueue(&Q, p);
           break;
    case 7:
          DeAQueue(&Q);
          break;
    case 8:
        ClearAQueue(&Q);
        break;
    case 9:
         DestoryAQueue(&Q);
         break;
     default:
         printf("输入错误，请再次输入"); 
         break;
 }
}


