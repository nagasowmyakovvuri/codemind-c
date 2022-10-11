#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int k;
        scanf("%d",&k);
        int a[k],i;
        for(i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
        }
        int l=0;
        for(i=0;i<k-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                continue;
            }
            else
            {
                l++;
            }
        }
        
       int min=a[0];
        for(i=1;i<k;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        int max=a[0];
        for(i=1;i<k;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        if(l==0)
        {
            printf("0");
        }
        else
        {
            int h;
            h=max-min;
            printf("%d
",h);
        }
        n-=1;
    }
    return 0;
}