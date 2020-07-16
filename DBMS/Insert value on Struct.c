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
	student std1={1,9.8,"Raj"}; 									//fisrt way to insert value

	student std2,std3;
		std2.roll=10;
		strcpy(std2.name,"Rahul");
		std2.marks=8.6;

	printf("\n Enter Roll , marks and name for Student 3::");   // given value by user 
		scanf("%d %f %s",&std3.roll,&std3.marks,std3.name);  
		
	printf("\n Data for Student 1::");
	printf("\n Roll = %d",std1.roll);
	printf("\n Name = %s",std1.name);
	printf("\n Marks = %.2f",std1.marks);
	
	printf("\n");
	
	printf("\n Data for Student 2::");
	printf("\n Roll = %d",std2.roll);
	printf("\n Name = %s",std2.name);
	printf("\n Marks = %.2f",std2.marks);
	
	printf("\n");
	
	printf("\n Data for Student 3::");
	printf("\n Roll = %d",std3.roll);
	printf("\n Name = %s",std3.name);
	printf("\n Marks = %.2f",std3.marks);

}
