#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student std1={"raj",5,8.9};
	struct student std2=std1;
	
	printf("\n STD1:: Name=%s \t Roll=%d \t Marks=%f",std1.name,std1.roll,std1.marks);
	printf("\n STD2:: Name=%s \t Roll=%d \t Marks=%f",std2.name,std2.roll,std2.marks);
}
