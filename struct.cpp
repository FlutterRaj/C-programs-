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
	struct student std1={"Raj",9,9.8};
	
	struct student std2,std3;
		strcpy(std2.name,"Indranil");
		std2.roll=10;
		std2.marks=9.9;
	
	printf("Enter Data for student 3:: Name,Roll,marks::");
		scanf("%s %d %f",std3.name,&std3.roll,&std3.marks);
		
	printf("\nSTD1: Name:%s \t Roll:%d \t Marks:%.2f \n",std1.name,std1.roll,std1.marks);
	printf("\nSTD2: Name:%s \t Roll:%d \t Marks:%.2f \n",std2.name,std2.roll,std2.marks);
	printf("\nSTD3: Name:%s \t Roll:%d \t Marks:%.2f \n",std3.name,std3.roll,std3.marks);	
}
