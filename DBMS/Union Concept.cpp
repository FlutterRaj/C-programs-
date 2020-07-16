#include<stdio.h>

typedef union Emp
{
	int emp_id;
	int salary;
}emp;

int main()
{
	emp emp1;
	emp1.emp_id=10;
	emp1.salary=100;  // value replace with 100			// always takes the next vlaue .
	printf("\n Emp id = %d",emp1.emp_id); 
	printf("\n Emp salary = %d ",emp1.salary);
	
	// Then how to use it ??   
	
	emp emp2;
	emp2.emp_id=10;
	printf("\n Emp id = %d",emp2.emp_id); 	 // already printed it .
	emp2.salary=100;  						// value replace with 100			 
	printf("\n Emp salary = %d ",emp2.salary);
}
