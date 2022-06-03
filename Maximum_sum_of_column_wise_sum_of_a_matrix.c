#include<stdio.h>
int main()
{
    int n,m,i,j,arr[100][100],sum=0,k=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        if(k<=sum)
        {
            k=sum;
        }
        sum=0;
    }
    printf("%d",k);
}