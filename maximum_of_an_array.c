#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
   {
       if(max<arr[i])
       {
           max=arr[i];
       }
   }
   printf("%d",max);
}