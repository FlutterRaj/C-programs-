#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student std1[5];
		int i,n;
	
	printf("Enter stduent no::");
		scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Data for student %d::\n",i+1);
			printf("Name ::");
				scanf("%s",std1[i].name);
			printf("Roll ::");
				scanf("%d",&std1[i].roll);
			printf("Marks ::");
				scanf("%f",&std1[i].marks);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Data of student %d",i+1);
			printf("\n STD1: Name=%s \t Roll_no=%d \t Marks=%f \n",std1[i].name,std1[i].roll,std1[i].marks);
	}
}
