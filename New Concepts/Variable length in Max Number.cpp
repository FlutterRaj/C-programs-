#include<stdio.h>
#include<stdarg.h>

int findMax(int,...);

int main(){
	
	int maxNum; 
	maxNum = findMax(3, 1,2,3);
	printf("\n Max Number between 1,2,3 is = %d",maxNum);
	
	maxNum = findMax(3, 2,1,3);
	printf("\n Max Number between 2,1,3 is = %d",maxNum);
	
	maxNum = findMax(3, 3,2,1);
	printf("\n Max Number between 3,2,1 is = %d",maxNum);
	
	maxNum = findMax(6, 53,47,37,26,75,43);
	printf("\n Max Number between 53,47,37,26,75,43 is = %d",maxNum);
	
}

int findMax(int num,...){
	va_list valist;
	int i;
	int letMax;
	int selectNumber;
	
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
