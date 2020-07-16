#include<Stdio.h>
int main()
{
	int l,u,m,n,a[10],i,j,se,flag=0;
	
	printf("Enter range::");
	scanf("%d",&n);
	
	printf("Enter %d  elements::",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	l=0,u=n-1;
	
	printf("Enter a value for search::");
	scanf("%d",&se);
	
	while(l!=u)
	{
		m=l+u/2;
		
		if(a[m]==a[se])
		flag=1;
		
		if(a[se]>a[m])
		 u=m-1;     
		if(a[se]<a[m])
		 l=m+1;
	}
	if(flag==1)
	printf("FOUND");
	else
	printf("NOT FOUND");
}
