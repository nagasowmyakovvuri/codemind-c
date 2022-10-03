#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n!=0)
   {
       int m;
       scanf("%d",&m);
       int a[n],i;
       for(i=0;i<m;i++)
       {
           scanf("%d",&a[i]);
       }
       int g=0;
       for(i=0;i<m-1;i++)
       {
           if(a[i]>=a[i+1])
           {
               g++;
           }
       }
       printf("%d
",g+1);
       n-=1;
   }
    return 0;
}