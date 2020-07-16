#include<Stdio.h>
#include<process.h>

int main()
{
	int a[10],i,n,flag=0;
	
	
	printf("Enter a range::");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			flag=1;
			exit;
	}
	if(flag==1)
		printf("\n Even number found :");
	else
		printf("\n Alls are Odd number :");

}
