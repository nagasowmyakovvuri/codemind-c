#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],p[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=0;
    for(i=m;i<n;i++)
    {
        p[k++]=a[i];
    }
    for(i=0;i<m;i++)
    {
        p[k++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}