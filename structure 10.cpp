#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks[20];
};

int main(void)
{
	int i,j,n,N;
	struct student arr[10];
	
	printf("Enter student number::");
		scanf("%d",&n);
	printf("Enter subject number::");
		scanf("%d",&N);
		
	for(i=0;i<n;i++)
	{
		printf("\nEnter data for Student %d",i+1);
			printf("\n Enter name::");
				scanf("%s",arr[i].name);
			printf("\n Enter Roll_no::");
				scanf("%d",&arr[i].roll);
				
				for(j=0;j<N;j++)
				{
					printf("Enter %d subject marks::",j+1);
						scanf("%f",&arr[i].marks[j]);
				}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nData of Student %d",i+1);
			printf("\n Name=%s \t Roll_no=%d  ",arr[i].name,arr[i].roll);
		
		for(j=0;j<N;j++)
		{
			printf("<<Marks of %d subject is=%f>> ",j+1,arr[i].marks[j]);
		}
		printf("\n");
	}
}
