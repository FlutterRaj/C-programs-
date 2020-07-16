// Insetion Sort

#include<stdio.h>

int main()
{
	int j,a[10],n,key,i;
	
	printf("\n Enter Range ::");	
	scanf("%d",&n);
	
	printf("\n Enter %d elements::\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
 	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		
		while(j>=0 && a[j] >key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}	 
	
	printf("\n After Sort ::\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}


