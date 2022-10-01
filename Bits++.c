#include<stdio.h>
int main()
{
    //char s[100];
    int k,h=0;
    scanf("%d",&k);
    while(k!=0)
    {
        char s[100];
        int j=0,i;
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++)
        {
         j++;   
        }
        //printf("%s",s);
        if(s[0]=='+'||s[j-1]=='+')
        {
            h++;
           // printf("%d",h);
        }
        else
        {
            h--;
            //printf("%d",h);
        }
        k--;
    }
    printf("%d",h);
    return 0;
}