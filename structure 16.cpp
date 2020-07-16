#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks; 
 }; 
 
 void display(char name[ ],int roll,float marks);
 int main(void)
 {
 	struct student std1={"Raj",1,5.5};
	struct student std2={"Raju",16,9.5};
	
	display(std1.name,std1.roll,std1.marks);
	display(std2.name,std2.roll,std2.marks);
	
 }
 
 void display(char name[ ],int roll,float marks)
 {
 	printf("Name=%s \t Roll=%d \t Marks=%f \n",name,roll,marks);
 }
