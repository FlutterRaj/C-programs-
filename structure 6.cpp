#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

void display(struct student);

int main(void)
{
	struct student std1={"XYZ",1,9.8};
	struct student std2={"ABC",2,9.7};
	
	display(std1);
	display(std2);
}

void display(struct student std)
{
	printf("\n Name=%s \t Roll_no=%d \t Marks=%f",std.name,std.roll,std.marks);
}
