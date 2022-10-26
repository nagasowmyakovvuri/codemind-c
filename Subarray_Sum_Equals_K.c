#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[1000],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int h=0,l=0,j;
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=i;j<n;j++)
        {
            s+=a[j];
            if(s==m)
           {
                h+=1;
            }
        }
    }
    printf("%d",h);
}