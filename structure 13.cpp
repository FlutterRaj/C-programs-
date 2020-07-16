#include<stdio.h>
#include<string.h>

struct student 
{
	char name[20];
	int roll;
	float marks;
};

void display(char name[ ],int roll,float marks);

int main(void)
{
	struct student std1={"Raj",12,9.8};
	struct student std2;
		strcpy(std2.name,"Rahul");
			std2.roll=3 ;  std2.marks=9.9;
			
	display(std1.name,std1.roll,std1.marks);
	display(std2.name,std2.roll,std2.marks);
	
	return 0;
}

void display(char name[20],int roll,float marks)
{
	printf("\n Name=%s \t Roll_no=%d \t Marks=%.2f\t",name,roll,marks);
}
