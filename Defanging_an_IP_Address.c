#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='.')
        {
           printf("[.]");;
        }
        else
        printf("%c",s[i]);
    }
    
    return 0;
}