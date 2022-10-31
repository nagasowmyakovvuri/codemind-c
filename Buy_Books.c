#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    int p=0,s=0;
    for(i=0;i<n;i++)
    {
        p+=a[i];
        s+=k[i];
    }
    if((s-p)>0)
    {
        printf("%d",s-p);
    }
    else
    printf("0");
    return 0;
}