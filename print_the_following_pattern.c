#include<stdio.h>
int main()
{
    char i,j;
    int n;
    scanf("%d",&n);
    for(i=65;i<65+n;i++)
    {
        for(j=0;j<n;j++)
        printf("%c ",i);
        printf("
");
    }
    return 0;
}