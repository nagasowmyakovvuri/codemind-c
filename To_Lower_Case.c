#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
    return 0;
}