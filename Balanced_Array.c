#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n!=0)
    {
        int m;
        scanf("%d",&m);
        int a[m],i;
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        int o=0,p=0,s=0;
        for(i=0;i<m;i++)
        {
            o=0;
            p=0;
            for(int j=0;j<i;j++)
            {
                o+=a[j];
            }
            for(int k=i+1;k<m;k++)
            {
                p+=a[k];
            }
            if(o==p)
            {
                s+=1;
            }
        }
        if(s>0)
        {
            printf("YES
");
        }
        else
        printf("NO
");
        n--;
    }
    return 0;
}