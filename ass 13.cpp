#include<stdio.h>

int main()
{
	int i,j,key,a[10]={12,2,3,1};
	
	for(i=1;i<4;i++)
	{
		key=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(i=0;i<4;i++)
		printf("%d\t",a[i]);
}
