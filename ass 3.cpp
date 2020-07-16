#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student strarr[10];
	int i,n;
	
	printf("\n Enter Student number :: ");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("\n Enter Data for Student %d",i+1);
		printf("\n Enter name::");
			scanf("%s",strarr[i].name);
		printf("\n Enter Roll::");
			scanf("%d",&strarr[i].roll);
		printf("\n Enter Marks::");
			scanf("%f",&strarr[i].marks);	
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n Data for Student %d",i+1);
			printf("\n Name = %s",strarr[i].name);
			printf("\n Roll = %d",strarr[i].roll);
			printf("\n Marks =%f",strarr[i].marks);
	}
}
