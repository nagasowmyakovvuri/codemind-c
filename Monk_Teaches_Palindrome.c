#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k!=0)
    {
        char s[100];
        scanf("%s",s);
        char l[100],u=0;
        int i;
        for(i=0;s[i]!=NULL;i++)
        {
            u++;
        }
        int j=0,h=0;
        for(i=u-1;i>=0;i--)
        {
            if(s[i]!=s[j])
            {
                h++;
            }
            j++;
        }
        if(h==0)
        {
            if(u%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
        k--;
    }
}