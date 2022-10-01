#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i;
    char max=s[0];
    for(i=1;s[i]!=NULL;i++)
    {
        if(max<=s[i])
        {
            max=s[i];
            
        }
    }
    //printf("%s",s);
    printf("%c",max);
}