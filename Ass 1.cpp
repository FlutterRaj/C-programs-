#include<STDIO.H>
#include<STRING.H>

struct student
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct student std1={"Raj",12,9.8};
	struct student std2,std3;
		strcpy(std2.name,"Raima");
		std2.roll=9; std2.marks=9.6;
	
	printf("\n Enter values[Name \\ Roll \\ Marks ] for std3::");
		scanf("%s %d %f",std3.name,&std3.roll,&std3.marks);
		
	printf("\n STD1:: Name=%s \t Roll=%d \t Marks=%f",std1.name,std1.roll,std1.marks);
	printf("\n STD2:: Name=%s \t Roll=%d \t Marks=%f",std2.name,std2.roll,std2.marks);
	printf("\n STD3:: Name=%s \t Roll=%d \t Marks=%f",std3.name,std3.roll,std3.marks);
}
