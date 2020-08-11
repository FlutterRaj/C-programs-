#include<stdio.h>
#include<stdarg.h>
int maximum(int num,...);
int main(){
	int max;
	
	max=maximum(2, 5,6);
//	printf("%d",max);
}

int maximum(int num,...){
	va_list valist;
	int i,max=1;
	va_start(valist,num);
	
	for(i=0;i<num;i++){
		max *= va_arg(valist,int);
		printf("\m=%d",max)
	}
	printf("%d",max);
}
