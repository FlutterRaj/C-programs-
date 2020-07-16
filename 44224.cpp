#include<stdio.h>

int main()
{
	int first,last,middle,c,search,n,array[100];
	
	printf("enter range::");
	scanf("%d",&n);
	
	printf("Enter %d elements on array",n);
	 
	  for(c=0;c<n;c++)
	  {
	  	scanf("%d",&array[c]);
	  }
	  
	  printf("Enter search element::");
	  scanf("%d",&search);
	  
	  first=0;
	  last=n-1;
	  middle=(first+last)/2;
	  
	  while( first <= last)
	  {
	  	if(array[middle]<search)
	  	first=middle+1;
	  	
	  	else if(array[middle]==search)
	  	{
	  		printf("%d element found on %d position..\n",search,middle+1);
	  		break;
		}
		  
		else  
			last=middle-1;
			
		middle=(first+last)/2;
      }
      
      if(first>last)
      printf("%d element not found ..",search);
		
}

