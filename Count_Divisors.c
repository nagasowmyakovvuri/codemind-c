# include<stdio.h>
int main()
{
    int l,r,k,count=0;
    scanf("%d%d%d",&l,&r,&k);
    int i;
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}