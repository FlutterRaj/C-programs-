main()
{
	int s=0,sum=0,n,i,j;
	
	printf("enter a range");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		s=0;
		
		for(j=1;j<=i;j++)
		
			s=s+j;
		
		sum=sum+s;
	
	}
	printf("Sum of the series is=%d",sum);
}
