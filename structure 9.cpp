#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student starr[10];
	int i,n;
	
	printf("Enter student no::");
		scanf("%d",&n);
	
	
		for(i=0;i<n;i++)
		{
			printf("Enter %d student Name - Roll_no - Marks::",i+1);
				scanf("%s %d %f",starr[i].name,&starr[i].roll,&starr[i].marks);
		}
		

		for(i=0;i<n;i++)
		{
			printf("\n Name=%s \t Roll_no=%d \t Marks=%.2f",starr[i].name,starr[i].roll,starr[i].marks);
		}
	
}
