#include<stdio.h>


struct student
{
	int roll;
	float marks;
 };
 
 union student1
 {
 	int roll;
 	float marks;
 };

int main()
{
printf("\nsize of struct=%d",sizeof(student));
printf("\nsize of student1=%d",sizeof(student1));
}

