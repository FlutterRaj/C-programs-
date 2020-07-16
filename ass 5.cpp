#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};
void display(char name[],int roll,float marks);
int main()
{
	struct student std1={"Raj",2,9.8};
	struct student std2;
	strcpy(std2.name,"Raima");
	std2.roll=9;
	std2.marks=9.6;
	
	display(std1.name,std1.roll,std1.marks);
	display(std2.name,std2.roll,std2.marks);
}

void display(char name[], int roll , float marks)
{
	printf("\n Name::%s",name);
	printf("\n Roll::%d",roll);
	printf("\n Marks::%f",marks);
}
