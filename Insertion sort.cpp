#include<STDIO.H>

int main()
{
	int a[10],n,i,key,j;
	
	printf("\n Enter range::");
		scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
}
