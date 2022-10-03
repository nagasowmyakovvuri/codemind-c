#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=1,p;
    while(1)
    {
        p=0;
        for(i=0;i<n;i++)
        {
            if (a[i]==k)
            {
                p+=1;
            }
        }
        if(p==0)
        {
            printf("%d",k);
            break;
        }
        else
        {
            k+=1;
        }
    }
    return 0;
}