#include<stdio.h>
int main()
{
    char s[10000],t;
    scanf("%[^
]s",s);
    scanf(" %c",&t);
    int i,p=0,l=0;
    if(t>=65 && t<=91)
    {
        l=1;
    }
    for(i=0;s[i]!=NULL;i++)
    {
        if (l==1)
        {
        if(s[i]==t ||s[i]==t+32)
        {
            p++;
        }
        }
        else
        {
            if(s[i]==t||s[i]==t-32)
        {
            p++;
        }
            
        }
    }
    if(p>0)
    {
        printf("%d",p);
    }
    else
    {
        printf("-1");
    }
    return 0;
}