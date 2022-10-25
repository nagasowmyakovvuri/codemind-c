#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int a[100],i,o=0;
    for (i=0;s[i]!=NULL;i++)
    {
        a[o++]=s[i];
    }
    if(a[6]=='A' and a[7]=='M')
    {
        if(a[0]=='1' and a[1]=='2')
        {
            printf("00:%c%c",a[3],a[4]);
        }
        else
        {
            printf("%c%c%c%c%c%c",a[0],a[1],a[2],a[3],a[4],a[5]);
        }
    }
    else
    {
        if(a[0]=='1' and a[1]=='2')
        {
            printf("%c%c:%c%c",a[0],a[1],a[3],a[4]);
        }
        else
        {
            printf("%c%c%c%c%c%c",int(a[0])+1,int(a[1])+2,a[2],a[3],a[4],a[5]);
        }
        
    }
    return 0;
}
