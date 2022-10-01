#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,k=0,l=0,j=0,p=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            k++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            l++;
        }
        else if(s[i]==' ')
        {
            j++;
        }
        else
        {
            p++;
        }
    }
    printf("Vowels: %d
",k);
    printf("Consonants: %d
",p);
    printf("Digits: %d
",l);
    printf("White spaces: %d
",j);
}