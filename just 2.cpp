#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

void display(struct student);
int main(void)
{
	struct student std1={"Raj",6,8.9};
	struct student std2={"Raima",3,9.8};
	
	display(std1);
	display(std2);
}

void display(struct student std)
{
	printf("\n Name=%s \t Roll_no=%d \t Marks::%f",std.name,std.roll,std.marks);
}

