#include<stdio.h>
#include<string.h>

typedef struct student
{
	int roll;
	float marks;
	char name[20];
}student;

void display(char name[],int roll, float marks);

int main(void)
{
	student std1={23,9.9,"Raj"};
	student std2={2,9.2,"Rahul"};
	display(std1.name,std1.roll,std1.marks);
	display(std2.name,std2.roll,std2.marks);
}

void display(char name[ ],int roll, float marks)
{
	printf("\n\n STU LIST");
	printf("\n Name = %s ",name);
	printf("\n Roll = %d ",roll);
	printf("\n Marks = %f", marks);
}
