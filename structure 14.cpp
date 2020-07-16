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
	struct student std1={"Raj",2,9.7};
	struct student std2={"Raima",1,9.6};
	
	display(std1);
	display(std2);
	return 0;
}

void display(struct student std)
{
	printf("\nName=%s \t Roll_no=%d \t Marks=%f \t",std.name,std.roll,std.marks);
}
