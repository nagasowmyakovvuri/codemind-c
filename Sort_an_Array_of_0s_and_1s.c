#include<stdio.h>
void insertion(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
			}
			else
			{
				a[j+1]=temp;
				break;
			}
		}
		if(j==-1)
		{
			a[0]=temp;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}