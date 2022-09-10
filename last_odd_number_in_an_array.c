#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,odd;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if( arr[i]%2)
        {
            odd=arr[i];
        }
    }
    printf("%d",odd);
}

