#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i;
    int h=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if (s[i]>=48 && s[i]<=57)
        {
            h++;
        }
    }
    if(h==0)
    {
        printf("Doesn't contain digit");
    }
    else
    printf("Contains %d digit",h);
    return 0;
}