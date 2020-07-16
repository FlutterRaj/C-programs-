#include<stdio.h>
#include<string.h>

struct student 
{
	char name[20];
	int roll;
	int marks;
};

void display(struct student);

int main(void)
{
	struct student std1={"Raj",1,9};
	struct student std2={"Rahul",12,7};
	
	display(std1);
	display(std2);

}

void display(struct student std)
{
	printf("Name=%s \t Roll_no=%d \t Marks=%d \n",std.name,std.roll,std.marks);
}

