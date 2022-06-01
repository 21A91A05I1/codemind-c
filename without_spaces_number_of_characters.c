#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,l;
    char str[100];
    scanf("%[^
]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=' ')
        {
            k++;
        }
    }
    printf("%d",k);
}