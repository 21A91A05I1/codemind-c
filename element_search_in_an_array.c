#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            c=1;
            break;
        }
    }
   if(c==1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}

