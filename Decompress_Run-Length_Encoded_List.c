#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k[1000],g=0;
    for (i=0;i<n-1;i+=2)
    {
        for(int j=0;j<a[i];j++)
        {
            k[g++]=a[i+1];
        }
    }
    for(i=0;i<g;i++)
    {
        printf("%d ",k[i]);
    }
}