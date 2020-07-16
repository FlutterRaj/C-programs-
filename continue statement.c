#include<stdio.h>

int main()
{
	int a[10]={-1,2,-3,4,-5,6,-7,8,-9,10};
	int i,sum=0;
	
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		//continue;
		sum=sum+a[i];
	}
	printf("sum of the positive elements is=%d",sum);
}

