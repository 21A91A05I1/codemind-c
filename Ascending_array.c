#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            c++;
        }
    }
    if(c+1==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}