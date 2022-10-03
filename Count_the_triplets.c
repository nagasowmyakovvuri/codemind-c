#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    while(m!=0)
    {
    int n;
    scanf("%d",&n);
    int a[n],i,j,s,p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(s=0;s<n;s++)
            {
                if(a[i]+a[j]==a[s] && a[i]!=a[j])
                {
                    p+=1;
                }
            }
        }
    }
        if(p==0)
        {
            printf("-1
");
        }
        else
        {
            printf("%d
",p/2);
        }
    m-=1;
    }
    return 0;
}