#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

void display(struct student);
int main()
{
	struct student std1={"Raj",3,9.8};
	struct student std2={"Raima",4,8.7};
	
	display(std1);
	display(std2);
}

void display(struct student stu)
{
	printf("\n Name=%s \t Roll:: %d \t Marks::%f",stu.name,stu.roll,stu.marks);
}
