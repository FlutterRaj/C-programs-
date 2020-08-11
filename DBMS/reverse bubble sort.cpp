#include<stdio.h>

int main(){
	
	int i,j,n,a[20],t;
	
	printf("\n Enter a range :: ");
		scanf("%d",&n);
		
	printf("\n Enter %d values :: ",n);
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}w
	for(i=0;i<n;i++){
		
		for(j=0;j<n-1;j++){
			
			if (a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	for( i=0 ;i<n ;i++){
	printf("\t %d",a[i]);
	}
}

