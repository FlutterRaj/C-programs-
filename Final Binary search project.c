#include<stdio.h>

int main()
{
	int first,last,middle,i,se,n,a[100];
	
	printf("enter range::");
	scanf("%d",&n);
	
	printf("Enter %d elements on array",n);
	 
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  
	  printf("Enter search element::");
	  scanf("%d",&se);
	  
	  first=0;
	  last=n-1;
	  middle=(first+last)/2;
	  
	  while( first <= last)
	  {
	  	if(a[middle]<se)
	  	first=middle+1;
	  	
	  	else if(a[middle==se])
	  	{
	  		printf("%d element found on %d position..\n",se,middle+1);
	  		break;
		}
		  
		else  
			last=middle-1;
			
		middle=(first+last)/2;
      }
      
      if(first>last)
      printf("%d element not found ..",se);
		
}

