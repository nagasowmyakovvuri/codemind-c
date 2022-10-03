#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=n)
        {
            p+=1;
        }
    }
    if(p==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}