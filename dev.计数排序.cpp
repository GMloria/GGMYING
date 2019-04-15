#include <stdio.h>
void countsort(int a[], int b[], int n, int k)
{
        int p[k+1], i;
        for(i=0;i<=k;i++)
        {
            p[i]=0;
        }
        for(i=0;i<n;i++)
        {
            p[a[i]]++;
        }
        for(i=1;i<=k;i++)
        {
            p[i]=p[i]+p[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            b[p[a[i]]-1]=a[i];
            p[a[i]]--;
        }
}

        
int main()
{
        int a[8] = {15,12,4,9,13,8,2,6};
		int b[8];
		int i;
        countsort(a, b, 8, 15);
        for (i=0; i<8; i++)
        {
            printf("%d ",b[i]);
        }
        printf("\n");
        return 0;
}
