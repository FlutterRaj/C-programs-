#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	int marks;
};

void display(char name[ ], int roll , int marks);

int main(void)
{
	struct student std1={"Raj",1,9};
	
		struct student std2;
			strcpy(std2.name,"Rahul");
				std2.roll=5 ; std2.marks=9;
				
	display(std1.name,std1.roll,std1.marks);
	display(std2.name,std2.roll,std2.marks);
	
}

void display(char name[ ], int roll , int marks)
{
	printf("\nName=%s \t Roll_no=%d \t Marks=%d",name,roll,marks);
}
