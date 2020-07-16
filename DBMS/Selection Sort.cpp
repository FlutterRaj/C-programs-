#include<Stdio.h>

int main()
{
	int i,j,min,t,a[10],n;
	
	printf("\n ENter range ::");
		scanf("%d",&n);
		
	printf("\n Ente %d elements ::",n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
			if(min!=i)
			{
				t=a[min];
				a[min]=a[i];
				a[i]=t;
			}
	}
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
}
