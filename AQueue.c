#include<stdio.h>
#include<stdlib.h>
#include"AQueue.h"
int n;
void InitAQueue(AQueue *Q)
{    n = 1;
	Q->front = 0;
	Q->rear = 0;
	Q->length = 0;
}
Status IsEmptyAQueue(const AQueue *Q)
{    n = 2;
    if(Q->front == Q->rear)
        {printf("队列为空");
        return TRUE;
        } 
    else
    {
        printf("队列不为空");
        return FALSE;
    }
}
Status IsFullAQueue(const AQueue *Q)
{   n = 3;
    if(Q->rear-Q->front == MAXQUEUE-1)
	  {
	  printf("队列已满");
        return TRUE;
      }
    else
    {
        printf("队列未满");
        return FALSE;
    }
}
Status GetHeadAQueue(AQueue *Q, int *e)
{    n = 4;
    if(IsEmptyAQueue(Q) == TRUE)
    return FALSE;
    else
    {
        (*e) = Q->data[Q->front];
        return TRUE;
    }
}
int LengthAQueue(AQueue *Q)
{    n = 5;
    if (IsEmptyAQueue(Q) == TRUE)
    {printf("队列为空");
      return FALSE;}
    else
    {
        int count = 0;
        while (Q->front <= Q->rear) 
        {
            count++;
            Q->front++;
        }
        printf("队列长度为:");
        printf("%d",count);
        return count;
    }
}
Status EnAQueue(AQueue *Q, int *data)
{    n = 6;
    if (IsEmptyAQueue(Q) == TRUE||IsFullAQueue(Q) == TRUE)
    {
	  printf("队列为空");
      return FALSE;
    }
    else
    {
        Q->rear++;
        Q->length++;
        Q->data[Q->rear] = (*data);
        while(IsEmptyAQueue(Q))
        {
            printf("入队后的队列为:",Q->data[Q->front++]);
        }
    }
}
Status DeAQueue(AQueue *Q)
{   n=7;
   if (IsEmptyAQueue(Q) == TRUE)
    {
     printf("队列为空");
     return FALSE;
   }
    else
    {
        int m;
        m = Q->data[Q->front];
        Q->front++;
        return TRUE;
        while(IsEmptyAQueue(Q))
        {
            printf("出队后的队列为:",Q->data[Q->front++]);
        }
    }
}
void ClearAQueue(AQueue *Q)
{    n = 8;
     while(Q->front <= Q->rear) 
      {
         DeAQueue(Q);
         Q->front=Q->rear=0;
      }
}
void DestoryAQueue(AQueue *Q)
{
    n=9;
    ClearAQueue(Q);
    free(Q);
}





    


