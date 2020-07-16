main()
{
	int n,p,r,c=0;
	
	printf("enter a value");
	scanf("%d",&n);
	p=n*n;
	
	while(p>0)
	{
		r=p%10;
		p=p/10;
		c=c+r;
	}
	if(c==n)
	printf("neon");
	else
	printf("not");
}
