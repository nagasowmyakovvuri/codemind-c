#include<stdio.h>
int main()
{
    int i,n,a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int o[10000],p=0,j;
    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=i;j<n;j++)
        {
            k+=a[j];
            o[p++]=k;
        }
    }
    int max=o[0];
    for(i=0;i<p;i++)
    {
       if(o[i]>max)
       {
           max=o[i];
       }
    }
    printf("%d",max);
    return 0;
}