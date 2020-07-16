#include<stdio.h>

int main()
{
	int l,u,i,j;
	
	printf("Enter two value::");
	scanf("%d %d",&l,&u);
	
	for(i=l;i<=u;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("\t%d",i);
	}
}
