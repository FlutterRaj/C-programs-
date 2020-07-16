#include <stdio.h>
int main()
{
   int a[100], se, n, c=0;
   int i;
	
	printf("\n Enter a length::");
 		scanf("%d", &n); 
	
	printf("\n %d element enter",n);
	for(i=0;i<n;i++)
   		scanf("%d", &a[i]);
   		
   		printf("\n ENter element you want to search::");
   			scanf("%d",&se);
   			
   			for(i=0;i<n;i++)
   			{
   				if(a[i]==se)
   				{
   					printf("\n%d found on %d position",se,i+1);
   					c++;}
			}
			if(c>=1)
				printf("\n%d is present %d times in the array.\n",se,c);
			else
              	printf("\n%d is not present in the array.");
              	
		}
