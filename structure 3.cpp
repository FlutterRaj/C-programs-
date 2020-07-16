#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student stdarr[10];
	int i;
	
	printf("Enter Name || Roll and marks::");
	for(i=0;i<3;i++)
	{
		scanf("%s %d %f",stdarr[i].name,&stdarr[i].roll,&stdarr[i].marks);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\nName::%s \t Roll_no::%d \t Marks::%f\n",stdarr[i].name,stdarr[i].roll,stdarr[i].marks);
	}
}
