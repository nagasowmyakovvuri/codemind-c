#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],hcf=1;
    for(i=1;i<n;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    //printf("%d",min);
    for(i=1;i<=min;i++)
    {
        int k=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                k+=1;
            }
        }
        if(k==n)
        {
            hcf=i;
        }
    }
printf("%d",hcf);
    return 0;
}