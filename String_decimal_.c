#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int h=0,i;
        char s1[100];
        scanf("%s",s1);
        for (i=0;s1[i]!=NULL;i++)
        {
            if(int(s1[i])<48 || int(s1[i])>57)
            {
                printf("False
");
                h=1;
                break;
            }
            
        }
    
    if (h!=1)
    {
        printf("True
");
    }
    n-=1;
    }
    return 0;
}