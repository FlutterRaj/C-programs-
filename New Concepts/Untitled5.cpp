#include<stdio.h>
#include<stdarg.h>

int findMax(int,...);

int main(){
	printf("\n Max Number between 1,2,3 is = %d",findMax(3, 1,2,3));
}

int findMax(int num,...){
	va_list valist;
	int i,letMax,selectNumber;
	va_start(valist,num);
	
	letMax = va_arg(valist,int);   // initilize first number max
	
	for(i=0 ;i < num-1 ;i ++){
		selectNumber = va_arg(valist,int);
		if(letMax < selectNumber){				// check every num with math
			letMax = selectNumber;
		}
	}
	va_end(valist);
	return letMax;
}
