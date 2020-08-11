#include<stdio.h>

int next();
 int count = 7;

int main(){
//	auto int i=3; {
//	
//		auto int i= 2; {
//		auto int i=1 ;
//		
//		printf("%d",i);
//		
//		}
//			printf("%d",i);
//	}
//		printf("%d",i);
		
		
//	register int x=12;
//	int *p;
//	
//	p = &x;	
//	
//	printf("x=%d",*p);

	while(count <= 10){
		next();
		count++;
	}
	
}

int next(){
	 int i= 14;
	
	i++;
	
	printf("it = %d and count = %d\n",i,count);
}
