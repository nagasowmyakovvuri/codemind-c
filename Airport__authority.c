# include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        sum=sum+2;
        else
        sum=sum+1;
    }
    printf("%d",sum);
    return 0;

}