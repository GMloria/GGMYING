#include<stdio.h>
#include<stdlib.h>
void MergeSort(int a[],int low,int high)
{
    void Merge(int a[],int low,int mid,int high);
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
void Merge(int a[],int low,int mid,int high)
{
int i=low,j=mid+1,p=0;
int *t;
t=(int*)malloc((high-low+1)*sizeof(int));
if(!t)
printf("申请失败");
while(i<=mid&&j<=high)
{
    if(a[i]>a[j])
    {
        t[p++]=a[i];
        i++;
    }
    else
    {
        t[p++]=a[j];
        j++;
    }
}
while(i<=mid)
{
    t[p++]=a[i];
    i++;
}
while(j<=high)
{
    t[p++]=a[j];
    j++;
}
for(p=0,i=low;i<=high;p++,i++)
     {a[i]=t[p];}
}

int main()
{
    int a[7]={35 ,62 ,46 ,12 ,37 ,25 ,2};
    int low=0,high=6;
    int i;
    printf("未排列的数组为:\n");
    for(i=low;i<=high;i++)
    {
        printf("%d ",a[i]);
    }
    MergeSort(a,low,high);
    printf("排序之后的数组为:\n");
    for(i=low;i<=high;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
