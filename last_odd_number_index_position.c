#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,odd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if( arr[i]%2)
        {
            odd=i;
        }
    }
    printf("%d",i);
}
