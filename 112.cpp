#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct student std1={"Raj",2,9.8};
	struct student std2;
	
	std2=std1;
	
	printf("\nSTD1: Name:%s \t Roll:%d \t Marks:%.2f \n",std1.name,std1.roll,std1.marks);
	printf("\nSTD2: Name:%s \t Roll:%d \t Marks:%.2f \n",std2.name,std2.roll,std2.marks);
}
