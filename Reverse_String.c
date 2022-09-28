#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=0;
    int i=0,t;
    for (i=0;s[i]!=NULL;i++)
    {
        l+=1;
    }
    i=0;
    int j=l-1;
    while(i<j)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    printf("%s",s);
    return 0;
}