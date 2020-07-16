#include<Stdio.h>

int main()
{
	char str1[]="week-7 assignment";
	char str2[]={'W','e','e','k','-','7','-','A','s','s','i','g','n','m','e','n','t'};
	int n1= sizeof(str1)/sizeof(str1[0]);
	int n2= sizeof(str2)/sizeof(str2[0]);
	
	printf("n1=%d,n2=%d",n1,n2);
	return 0;
}
