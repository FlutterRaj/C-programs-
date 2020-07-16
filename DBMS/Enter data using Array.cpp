#include<stdio.h>
#include<string.h>

typedef struct student
{
	int roll;
	float marks;
	char name[20];
}student;

int main(void)
{
	int n,i;
	student stdarr[10];
	
	printf("\n Enter student number ::");
		scanf("%d",&n);
	
	// value given from user
	for(i=1;i<=n;i++)
	{
		printf("\n______ENTER DATA FOR STUDENT %d________",i);
		printf("\n Enter name ::",i);
			scanf("%s",stdarr[i].name);
		printf("\n Enter ROll ::",i);
			scanf("%d",&stdarr[i].roll);
		printf("\n Enter marks ::");
			scanf("%f",&stdarr[i].marks);
	}
	
	//printing
	
	for(i=1;i<=n;i++)
	{
		printf("\n______ DATA FOR STUDENT %d ________",i);
		printf("\n Name = %s ",stdarr[i].name);
		printf("\n Roll = %d ",stdarr[i].roll);
		printf("\n Marks = %.2f ",stdarr[i].marks);
	}
	
		
}
