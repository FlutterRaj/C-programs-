#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main (void)
{
	struct student std1={"Raj",10,9.8};
	struct student std2;
	std2=std1;
	
	printf("\n\n std1:: Name=%s \t Roll_no=%d \t Marks=%.2f",std1.name,std1.roll,std1.marks);
	printf("\n\n std2:: Name=%s \t Roll_no=%d \t Marks=%.2f",std2.name,std2.roll,std2.marks);
		
}
