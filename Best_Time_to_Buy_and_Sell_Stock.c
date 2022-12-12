#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],b[1000],k[1000],l=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int o=0,p=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                if (a[j]>o)
                {
                    o=a[j];
                    p+=1;
                }
            }
           
        }
        if (p!=0)
        {
            k[l++]=o-a[i];
        }
    }
    if (l!=0)
    {
        int u=0;
        for(i=0;i<l;i++)
        {
            if(u<k[i])
            {
                u=k[i];
            }
        }
        printf("%d",u);
    }
    else
    {
        printf("0");
    }
    
}