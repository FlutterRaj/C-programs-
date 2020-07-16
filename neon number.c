main()
{
	int n,r,p,s=0;
	
	printf("enter a value to check neon or not ::");
	scanf("%d",&n);
	
	p=n*n;
	
	while(p!=0)
	{
		r=p%10;
		p=p/10;
		s=s+r;
	}
	if(s==n)
	printf("neon");
	else
	printf("not");
	
}
