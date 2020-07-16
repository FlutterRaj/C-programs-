#include<stdio.h>

union job
{
	float salary;
	int eid;	
}j;

int main()
{
	j.salary=12000;
	j.eid=100;
	
	printf("\n Salary::%f",j.salary);
		printf("\n Emp_Id::%d",j.eid);
}
