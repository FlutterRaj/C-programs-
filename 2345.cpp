#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	int i,n;
	struct student stuarr[n];
	
	printf("Enter Student no::");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		scanf("%s %d %f",stuarr[i].name,&stuarr[i].roll,&stuarr[i].marks);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n%s %d %f",stuarr[i].name,stuarr[i].roll,stuarr[i].marks);
	}
}
