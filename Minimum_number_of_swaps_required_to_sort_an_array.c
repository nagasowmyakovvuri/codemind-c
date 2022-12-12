#include<stdio.h>
int buble(int *a,int n)
{
    int m=0,i,h=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            //printf("%d ",a[i]);
            m=a[i];
            h=i;
        }
    }
   // printf("%d",a[h]);
    return h;
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
    int d,temp,p=0;
    for(i=n-1;i>=0;i--)
    {
        d=buble(a,i);
        //printf("%d ",d);
        if(a[i]<a[d])
        {
            temp=a[i];
            a[i]=a[d];
            a[d]=temp;
            p+=1;
        }
    }
    printf("%d",p);
}