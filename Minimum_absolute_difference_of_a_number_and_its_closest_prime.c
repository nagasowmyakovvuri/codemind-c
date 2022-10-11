#include<stdio.h>
int is_prime(int g)
{
    int i;
    if(g==1)
    {
        return 0;
    }
    for(i=2;i<g;i++)
    {
        if(g%i==0)
        {
            return 0;
        }
    }
    
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int o, i,h,j;
    i=n;
    while(1)
    {
        if(is_prime(i)==1)
        {
            o=i;
            break;
        }
        else
        {
            i++;
        }
    }
    j=n;
     while(1)
    {
        if(is_prime(j)==1)
        {
            h=j;
            break;
        }
        else
        {
            j--;
        }
    }
   int y=o-n;
   int x=n-h;
   int min;
   min=y<x?y:x;
    printf("%d",min);
    return 0;
}