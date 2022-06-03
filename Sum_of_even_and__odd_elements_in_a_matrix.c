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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
            }
            else
            {
                k=k+arr[i][j];
            }
        }
    }
    printf("%d %d",sum,k);
}