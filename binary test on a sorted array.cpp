#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

	int first,last,middle;
	
		first=0;
		  last=n-1;
		  middle=(first+last)/2;
		  
		  while( first <= last)
		  {
		  	if(c[middle]<search)
		  	first=middle+1;
		  	
		  	else if(c[middle==search])
		  	{
		  		printf("%d found at location %d.\n",search,middle+1);
		  		break;
			}
			  
			else  
				last=middle-1;
				
			middle=(first+last)/2;
	      }
	      
	      if(first>last)
	      printf("Not found! %d isn't present in the list.\n", search);
	
}
