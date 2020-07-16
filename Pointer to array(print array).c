#include<stdio.h>

int main()
{
	int a[10],n,i,*ptr;
	
	printf("enter range");
	scanf("%d",&n);
	
	printf("\n enter aaray values=");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	
	//here, we use pointer to point the values of array into *ptr;
	
	ptr=a;
	//no need use of '&' .. direct write;
	
	//print the aaray using pointer;
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",*ptr);
		//now increse ptr location, to get acess all the values;
		ptr++;
	}
}
