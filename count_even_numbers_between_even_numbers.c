#include<stdio.h>
int even_count(int *arr,int n)
{
    int i,k=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i-1]%2==0 && arr[i+1]%2==0)
        {
            if(arr[i]%2==0)
            {
                k++;
            }
        }
    }
    return k;
}
int main()
{
    int n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=even_count(arr,n);
    printf("%d ",k);
}