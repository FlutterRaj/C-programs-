#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks[5];
};

int main(void)
{
	int i,j,n,N;
	struct student starr[10];
	
	printf("Enter student number::");
	scanf("%d",&n);
	
	printf("Enter subjects number::");
	scanf("%d",&N);
	
	for(i=0;i<n;i++)
	{
		printf("Enter student %d ::",i+1);
			printf("\nName::");
				scanf("%s",starr[i].name);
				
			printf("Roll no::");
				scanf("%d",&starr[i].roll);
				
		for(j=0;j<N;j++)
		{
			printf("Enter %d number marks::",j+1);
			scanf("%f",&starr[i].marks[j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nName::%s \t Roll_no::%d \t  ",starr[i].name,starr[i].roll);
		
			for(j=0;j<N;j++)
			{
				printf("Marks for sub %d::%.2f\n",j+1,starr[i].marks[j]);
				
			}
			printf("\n");
	}
}
