#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            k++;
        }
    }
    printf("%d ",k);
}