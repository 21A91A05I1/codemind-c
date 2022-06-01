#include<stdio.h>
int main()
{
    int n,m,i,j,arr[100][100],k=0,sum=0;
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
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
        if(i!=n-i-1)
        {
            k=k+arr[i][n-i-1];
        }
    }
    printf("%d",sum+k);
    
}