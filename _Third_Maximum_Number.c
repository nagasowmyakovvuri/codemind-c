#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,k[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    int max1=0,max2=0,max3=0;
    for(i=0;i<n;i++)
    {
        if(k[i]>max1)
        {
            max1=k[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(k[i]>max2 and k[i]!=max1)
        {
            max2=k[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(k[i]>max3 && k[i]!=max1 && k[i]!=max2)
        {
            max3=k[i];
        }
    }
    if (max3!=0)
    {
        printf("%d",max3);
    }
    else printf("%d",max1);
}