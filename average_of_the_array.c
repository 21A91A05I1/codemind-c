#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
   sum=sum/n;
   printf("%.2f",sum);
}
