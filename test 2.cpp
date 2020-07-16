#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student std1={"raj",12,6.7};
	
	struct student std2;
		std2=std1;
	
	printf("\n STD1: Name=%s \t Roll_no=%d \t Marks=%f \n",std1.name,std1.roll,std1.marks);
	printf("\n STD2: Name=%s \t Roll_no=%d \t Marks=%f \n",std2.name,std2.roll,std2.marks);

}
