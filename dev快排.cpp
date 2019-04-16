#include<stdio.h> 
void quicksort(int a[],int left,int right)
{
        int i=left;
        int j=right;
        int temp=0;
        if(i<j)
		{   
          temp=a[i]; 
          while(i<j&&a[j]>=temp)          
            a[i]=a[j];  
            j--;
          while(i<j&&a[i]<=temp)         
            a[j]=a[i];  
            i++;
        }
        if(i=j)
        a[j]=temp;    
        quicksort(a,left,i-1);  
        quicksort(a, i+1,right);  
 }        
int main() 
{
    int a[7]={10,5,3,1,7,2,8};
    quicksort(a,0,6);
    for(int t=0;t<7;t++)
	{
      printf("%d ",a[t]);    
    }
  return 0;
}
