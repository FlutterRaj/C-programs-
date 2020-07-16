#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	int marks;
};

void display(struct student);
int main(void)
{
	struct student std1={"ABC",1,20};
	struct student std2={"XYZ",2,21};
	
	display(std1);
	display(std2);
}

void display(struct student std)
{
	printf("\n Name=%s \t Roll_no=%d \t Marks=%d \t",std.name,std.roll,std.marks);
}
