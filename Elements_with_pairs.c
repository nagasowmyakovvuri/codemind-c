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
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        a[n]=0;
        for(i=0;i<=n;i++)
        {
           printf("%d ",a[i]);
            
        }
    }
    return 0;
}