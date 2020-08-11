//calculate gross slary = basic + da + hra 
// net = gs - pf [ profident fund]
// da = 75% of basic
// hra = 15% on basic
// pf = 1800 rs.
//case 1: emp_id , case 2: location ,
// case 3: with DOJ[year]/job_category/year_of_exprience 
#include<stdio.h>

void calculateGrossSalary(float basic_sal){
	
	float gs,da,hra;
	
	da = (75.0/100.0)*basic_sal;
	hra = (15.0/100.0)*basic_sal;
	
	
	printf("\n Da = %.1f",da);
	printf(" \n Hra = %.1f",hra);
	
	gs = basic_sal + da + hra;
	
	printf("\n Gs = %.1f",gs);
}

int main(){
	calculateGrossSalary(1900);
}
