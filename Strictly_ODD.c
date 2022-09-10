#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0 && arr[i]%2==1)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}