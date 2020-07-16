

int main()
{
	int i,j,sp,no,n;
	
	printf("enter range");
	scanf("%d",&n);
	no=n;
	
	for(i=1;i<=n;i++)
	{
			for(sp=1;sp<=no;sp++)
			{
				printf(" ");
		    }
		    
			no--;
			
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
	}
}
