#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000][1000],b[1000][1000],n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int g=abs(a[i][j]-b[i][j]);
           if (j!=n-1)
           {
               printf("%d ",g);
           }
           else
           {
               printf("%d",g);
           }
        }
        printf("
");
    }
    return 0;
}