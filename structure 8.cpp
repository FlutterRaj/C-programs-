#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student std1={"Raj",1,9.6};
	struct student std2;
		std2=std1;
		
		printf("\nStd1: Name=%s \t Roll_no=%d \t Marks=%f",std1.name,std1.roll,std1.marks);
		printf("\nStd2: Name=%s \t Roll_no=%d \t Marks=%f",std2.name,std2.roll,std2.marks);
}
