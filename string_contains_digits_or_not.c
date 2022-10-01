#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while (k!=0)
    {char s[100];
         scanf("%s",s);
        int i,l=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
           l++;
        }
    }
    if(l!=0)
    {
        printf("Yes
");
    }
    else{
        printf("No
");
    }
    k--;
    }
    return 0;
    
}