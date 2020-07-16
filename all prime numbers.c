#include<stdio.h>

int main()
{
	int l,u,i,j;
	
	printf("enter lower limit=");
	scanf("%d",&l);
	
	printf("enter upper limit=");
	scanf("%d",&u);
	
	for(i=l;i<u;i++)
	{
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				break;
			}
			
			if(i==j)
			{
				printf(" %d",i);
			}
	}
}
