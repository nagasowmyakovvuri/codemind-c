#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,l=0;
    char f[100],k;
    for(i=0;s[i]!=NULL;i++)
    {
       
        if((s[i]-48)%2!=0)
        {
           printf("%d",(s[i]-48)*(s[i]-48));
            //printf("%c",k);
            l++;
        }
    }
    //printf("%s",f);
    return 0;
}