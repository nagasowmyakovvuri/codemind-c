#include<stdio.h>
int main()
{
    int n,m,a[10000],b[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int y;
    scanf("%d",&y);
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=y && b[i]>=y)
        {
            p+=1;
        }
        //printf("%d %d
",a[i],b[i]);
       // printf("%d ",b[i]);
        
    }
    //printf("%d",y);
    printf("%d",p);
}