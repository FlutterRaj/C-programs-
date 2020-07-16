#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	int marks[4];
};

int main(void)
{
	int i,j,n,N;
	struct student stuarr[3];
	
	printf("Enter student number::");
		scanf("%d",&n);
		
	printf("Enter subject number::");
		scanf("%d",&N);
		
	for(i=0;i<n;i++)
	{
		printf("\n Enter data for %d student::",i+1);
			printf("\n Enter name::");
				scanf("%s",stuarr[i].name);
				
			printf("\n Enter Roll_no::");
				scanf("%d",&stuarr[i].roll);
	
		for(j=0;j<N;j++)
		{
			printf("\nEnter marks of sub %d::",j+1);
				scanf("%d",&stuarr[i].marks[j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Data of student %d",i+1);
		printf("\n Name::%s \t Roll no::%d \t" ,stuarr[i].name,stuarr[i].roll);
	
	
		for(j=0;j<N;j++)
		{
			printf("\n Marks:: %d",stuarr[i].marks[j]);
		}
		printf("\n");
	}
}

