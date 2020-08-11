#include<stdio.h>
#include<stdarg.h>
int add(int num,...);
int main(){
	int sum;
	
	sum=add(3, 5,5,5);
	printf("%d",sum);
}

int add(int num,...){
	va_list valist;
	int sum=0,i;
	
	va_start(valist,num);
	
	for(i=0 ;i < num ;i ++){
		 sum += va_arg(valist, int);
	}
	va_end(valist);
	return sum;
}


