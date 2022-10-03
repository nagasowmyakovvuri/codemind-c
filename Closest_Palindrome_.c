#include<stdio.h>
int is_palindrome(int j)
{
    int r=0,s=0,u=j;
    while(j!=0)
    {
        r=j%10;
        s=s*10+r;
        j=j/10;
    }
    if(s==u)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=n+1,j=n-1,k=0;
    while(1)
    {
        if(is_palindrome(j)==1)
        {
            printf("%d ",j);
            k+=1;
        }
        if(is_palindrome(i)==1)
        {
            printf("%d ",i);
            k+=1;
        }
        if(k>0)
        {
            break;
        }
        i=i+1;
        j=j-1;
    }
    return 0;
}