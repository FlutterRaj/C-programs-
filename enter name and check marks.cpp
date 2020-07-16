#include<stdio.h>
#include<string.h>

int main()
{
	char name[20][30],key[10];
	int i,n,j;
	float a[10];
	
	printf("\n Enter student number::");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("\n Enter number %d student name::",i+1);
					scanf("%s",name[i]);
				printf(" Enter number %d student marks::",i+1);
					scanf("%f",&a[i]);
		}
		
		//for check printing.
		/*for(i=0;i<n;i++)
		{
			printf("\n student %d name is ::%s",i+1,name[i]);
				printf("\nstudent %d marks is::%.1f\n\n",i+1,a[i]);
		}*/

		printf("\n Enter whom marks you want to show ?");
			scanf("%s",key);
						
			for(i=0;i<n;i++)
			{
				if(strcmp(name[i],key)==0)
				{
					printf("\n Name of student %d is=%s \n Marks of student %d is =%.1f",i+1,name[i],i+1,a[i]);
					break;	}
						
			}
			if(strcmp(key,name[i])!=0)
				printf("\n no data found..");
			
			
			
}
