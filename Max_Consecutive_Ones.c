#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=0,l=0,s[1000];
    for(i=0;i<n+1;i++)
    {
        //printf("%d",a[i]);
        if(a[i]==1)
        {
            p+=1;
        }
        else
        {
          //  printf("Hi");
            s[l++]=p;
            p=0;
        }
    }
    int u=0;
    for(i=0;i<l;i++)
    {
        if(s[i]>u)
        {
            u=s[i];
        }
    }
    printf("%d",u);
}