#include<stdio.h>

int fact(int);
int main(){
	int ans;
	
	ans= fact(5);
	
	printf("%d",ans);
}

int fact(int num){
	int fact=1,i;
	
	for(i=1;i<=num;i++){
		fact = fact * i;
	}
	return fact;
}
