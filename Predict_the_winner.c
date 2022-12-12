#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],p=0,q=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0)
        {
            p+=a[i];
        }
        else
        {
            q+=a[i];
        }
    }
    int y=abs(p-q);
    if (y%4==0)
    {
        printf("X");
    }
    else
    printf("Y");
}