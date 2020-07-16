#include<stdio.h>
#include<string.h>

typedef struct student
{
	int roll;
	float marks;
	char name[20];
}student;

int main(void)
{
	student std1={12,9.5,"Raj"}; // given value
	student std2=std1 ;  // copy value from 1 to 2
	
	// print both for check
	
	printf("\n Data for student 1:: Name=%s \n Roll=%d \n Marks=%.1f\n",std1.name,std1.roll,std1.marks);
	
	printf("\n Data for student 2:: Name=%s \n Roll=%d \n Marks=%.1f\n",std2.name,std2.roll,std2.marks);
}
