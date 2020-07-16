#include<stdio.h>

int main()
{
	int i,se,middle,first,last,a[100],n;
	
	printf("Enter a range::");
		scanf("%d",&n);
	
	printf("Enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter an search element::");
		scanf("%d",&se);
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	while(first <= last)
	{
		if(a[middle]<se)
			first=middle+1;
		else if(a[middle]==se)
		{
			printf("Element %d found on %d position",se,middle+1);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("%d element is not found on this list..");
	}
}

