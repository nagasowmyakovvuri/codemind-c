#include<stdio.h>
int count(int *arr,int n,int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int g=0,h[10000];
    for(i=0;i<n;i++)
    {
        if(count(h,g,a[i])!=1)
        {
            h[g++]=a[i];
        }
    }
    for(i=0;i<g;i++)
    {
        printf("%d ",h[i]);
    }
    return 0;
}