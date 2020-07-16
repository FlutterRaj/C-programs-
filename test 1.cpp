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
	struct student std1={"Raj",1,9.8};
		
	struct student std2,std3;
		strcpy(std2.name,"Rahul");
			std2.roll=2; 
				std2.marks=9.9;
				
	printf("Enter Name Roll Marks STD3::");
		scanf("%s %d %f",std3.name, &std3.roll , &std3.marks);
		
	printf("\n STD1: Name=%s \t Roll_no=%d \t Marks=%.2f \n",std1.name,std1.roll,std1.marks);
	printf("\n STD2: Name=%s \t Roll_no=%d \t Marks=%.2f \n",std2.name,std2.roll,std2.marks);
	printf("\n STD3: Name=%s \t Roll_no=%d \t Marks=%.2f \n",std3.name,std3.roll,std3.marks);
}
