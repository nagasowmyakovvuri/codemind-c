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
    int max,k[n],p=0,j;
    for(i=0;i<n;i++)
    {
        max=a[i+1];
        for(j=i+1;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
        }
        k[p++]=max;
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",k[i]);
    }
    printf("-1");
    return 0;
}