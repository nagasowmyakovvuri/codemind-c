#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int k,pos,a[1000],b[1000],p=0,i;
        scanf("%d%d",&k,&pos);
        for(i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<k;i++)
        {
            b[p++]=a[i];
        }
        for(i=0;i<k;i++)
        {
            b[p++]=a[i];
        }
        if(pos>k)
        {
            pos=pos%k;
        }
        for(i=k-pos;i<2*k-pos;i++)
        {
            if(i!=2*k-pos-1)
            printf("%d ",b[i]);
            else
            printf("%d",b[i]);
        }
        printf("
");
    }
    return 0;
}