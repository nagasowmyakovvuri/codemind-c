#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,k=0,h=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            k++;
        }
        if(s[i]=='o')
        {
            h++;
        }
    }
    if(2*k==h)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}