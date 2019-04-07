#include<stdio.h>
#include<stdlib.h>
#include"LQueue.h"
#include"LQueue.c"
int main()
{
    LQueue Q;
    int *p,*q; 
    printf("请输入你的选择:");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            InitLQueue(&Q);
            printf("队列初始化成功");
            break;
        case 2:
            IsEmptyLQueue(&Q);
            break;
        case 3:
            GetHeadLQueue(&Q, p);
            break;
        case 4:
          LengthLQueue(&Q);
          break;
        case 5:
            printf("输入想要入队的元素:");
            scanf("%d",&(*q));
            EnLQueue(&Q, p);
            break;
        case 6:
             DeLQueue(&Q);
             break;
        case 7:
             TraverseLQueue(&Q);
             break;
        case 8:
             ClearLQueue(&Q);
            break;
        case 9:
            DestoryLQueue(&Q);
            break;
        default:
        printf("输入错误，请重新输入");
            break;
    }
}
