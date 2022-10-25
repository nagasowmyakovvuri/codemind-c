#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int a[100],i,o=0;
    for(i=0;s[i]!=NULL;i++)
    {
        a[o++]=s[i];
    }
    int b;
    //b+=int(a[1]);
    b=int(a[0]-48)*10+int(a[1]-48);
   // printf("%d",b);
   if(a[0]=='0' && a[1]=='0')
     {
         printf("12:%c%c AM",a[3],a[4]);
     }
    //if(int(a[0])<=1 || int(a[1])<=2)
    //{
        //printf("%c",a[0]);
     //}
     else if (b<=11)
     {
         printf("%c%c:%c%c AM",a[0],a[1],a[3],a[4]);
     }
     else if (b==12)
     {
       printf("%c%c:%c%c PM",int(a[0]),int(a[1]),a[3],a[4]);   
     }
    
    else
    {
   printf("%c%c:%c%c PM",int(a[0])-1,int(a[1])-2,a[3],a[4]);
    
    }
    return 0;
}