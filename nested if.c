main()
{
	int i,n;
	
	printf("enter a value to cheak ");
	scanf("%d",&n);
	i=n;
	
	if(i==n)
	{
		if(i<15)
		printf("value is smaller than 15");
		
		if(i<12)
		printf("\nvalue is smaller than 12 too");
		
	    //if(i==15)
	    //printf("value is equal to 15");
		
		else
		printf("\nvalue is bigger than 15");
	}
	
}
