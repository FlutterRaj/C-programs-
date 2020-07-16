#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student stuarr[10];
	int i;
	
	printf("ENTER name || Roll_no || Marks::");
	for(i=0;i<3;i++)
	{
		scanf("%s %d %f",stuarr[i].name, &stuarr[i].roll , & stuarr[i].marks);
	}
	
for(i=0;i<3;i++)
	{
		printf("student %d :: Name::%s \t Roll_no::%d \t Marks::%f \n",i+1,stuarr[i].name, stuarr[i].roll ,  stuarr[i].marks);
	}

}
