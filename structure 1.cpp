#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main(void)
{
	struct student std1={"RAJ",1,9.8};
	
	struct student std2,std3;
		strcpy(std2.name,"RAHUL");
		std2.roll=23 ;
		std2.marks=9.5;
	
	//struct student std3;	
	printf("Enter value for std3::");
		scanf("%s %d %f", std3.name , & std3.roll , & std3.marks);
		
	printf("\nSTD 1:: Name=%s \t Roll::%d \t Marks::%f",std1.name,std1.roll,std1.marks);
	printf("\nSTD 2:: Name=%s \t Roll::%d \t Marks::%f",std2.name,std2.roll,std2.marks);
	printf("\nSTD 3:: Name=%s \t Roll::%d \t Marks::%f",std3.name,std3.roll,std3.marks);
}
