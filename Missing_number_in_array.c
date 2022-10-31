#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int k;
        scanf("%d",&k);
        int a[1000],i;
       // printf("%d",k);
        for(i=0;i<k-1;i++)
        {
            scanf("%d",&a[i]);
        }
        int h[10000],g=0,j;
        for(i=1;i<=k;i++)
        {
            h[g++]=i;
        }
        for(i=0;i<g;i++)
        {
            int p=0;
            for(j=0;j<k-1;j++)
            {
                if(h[i]==a[j])
                {
                    p++;
                }
            }
            if(p==0)
            {
                printf("%d
",h[i]);
                break;
            }
        }
        n--;
    }
    return 0;
}