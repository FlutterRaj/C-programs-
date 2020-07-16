#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct student std1= {"Raj",1,9.8};
	struct student std2 , std3 ;
	
	strcpy(std2.name,"Raima");
	std2.roll=2 ; std2.marks=10.0;
	
	printf("Enter name Roll no and marks for std3:: \n");
	scanf("%s %d %f", std3.name , & std3.roll , & std3.marks);
	
	printf("\n\n std1:: Name=%s \t Roll_no=%d \t Marks=%.2f",std1.name,std1.roll,std1.marks);
	printf("\n\n std2:: Name=%s \t Roll_no=%d \t Marks=%.2f",std2.name,std2.roll,std2.marks);
	printf("\n\n std3:: Name=%s \t Roll_no=%d \t Marks=%.2f",std3.name,std3.roll,std3.marks);
}
