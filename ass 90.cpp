#include<stdio.h>

union job
{
	float salary;
	int eid;
};

int main()
{
	union job j;
	j.salary=1000.9849;	
	printf("\n salary=%f",j.salary);
		j.eid=5;
	printf("\n ID=%d",j.eid);
}
