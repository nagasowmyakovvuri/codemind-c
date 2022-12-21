#include<stdio.h>
int min(int * a,int n)
{
    int mi=a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }
    return mi;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int o=0,l[1000],k;
    while(n!=0)
    {   printf("%d
",n);
        k=min(a,n);
        o=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            {
                l[o++]=a[i]-k;
            }
        }

        for(i=0;i<o;i++)
        {
            a[i]=l[i];
        }
        n=o;
    }
    return 0;
}