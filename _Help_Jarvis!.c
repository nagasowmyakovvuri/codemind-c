#include<stdio.h>
void sort(int *a,int p)
{
    int i,j,t;
    for (i=0; i<p-1; i++){
   for (j=i+1; j<p; j++){
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
    int n;
    scanf("%d",&n);
    while (n!=0)
    {
        int t,i;
        scanf("%d",&t);
        int a[1000],p=0;
        while(t!=0)
        {
            int r=t%10;
            a[p++]=r;
            t=t/10;
        }
        sort(a,p);
        int o=0;
        //for(i=0;i<p;i++)
        //printf("%d ",a[i]);
        for(i=0;i<p-1;i++)
        {
            
            if(a[i]!=a[i+1]-1)
            {
                printf("NO
");
                o=1;
                break;
            }
        }
        if (o==0)
        printf("YES
");
        n--;
    }
}