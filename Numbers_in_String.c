#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i;
    int h=0,k;
    for(i=0;s[i]!=NULL;i++)
    {
        if (s[i]>=48 && s[i]<=57)
        {
            k=s[i]-48;
            //printf("%d ",s[i]);
            h+=k;
        }
    }
    
    printf("%d",h);
    return 0;
}