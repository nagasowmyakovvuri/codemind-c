#include<stdio.h>
void sort(int *a,int n)
{
    int i,j,t;
    for (i=0; i<n-1; i++){
   for (j=i+1; j<n; j++){
      if (a[i] > a[j]){
         t=a[i];
         a[i] = a[j];
         a[j] = t;
      }
   }
}
}
int main()
{
    int k;
    scanf("%d",&k);
    while(k!=0)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[1000],b[1000],i,r[1000000],p=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            r[p++]=a[i];
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
            r[p++]=b[i];
        }
        sort(r,p);
        for(i=0;i<p;i++)
        {
            if (i!=p-1)
            printf("%d ",r[i]);
            else
            printf("%d",r[i]);
        }
        printf("
");
        k--;
    }
}