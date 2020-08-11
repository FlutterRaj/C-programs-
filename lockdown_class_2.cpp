#include<stdio.h>

int fun(){
		static int num = 16;
		return num--;
	}
	
int main(){
	/*static int i=5;
	if(--i){
		main();
		printf("%d\n",i);
	}*/

//	static int i=5;
//	if(--i){
//		main();
//		printf("%d\n",i);
//	}

//	typedef int i;
//	i a= 0;
//	printf("%d",a);

//	int x=10;
//	static int y = x;
//	
//	if(x==y){
//		printf("equal");
//	}else if(x>y){
//		printf("greater");
//	}else{
//		printf("less");
//	}
	
//	for(fun();fun();fun())
//		printf("%d\n",fun());
//	return 0;

while(fun()){
	printf("%d\n",fun());
}
}
