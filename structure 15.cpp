#include<stdio.h>

struct student 
{
	char name[20];
	int roll;
	float marks;
};

void display(struct student std);
int main(void)
{
	struct student std1={"Raj",1,9.8};
	struct student std2={"Rahul",2,9.6};
	
	display(std1);
	display(std2);
}

void display(struct student std)
{
	printf("\n Name=%s \t Roll_no=%d \t Marks=%f \n",std.name,std.roll,std.marks);
}
