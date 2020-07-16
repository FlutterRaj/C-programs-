#include<stdio.h>

int main()
{
	int j;
	
	int f(int);
	
	int main()
	{
		f();
	}
	
	int f(int j)
	{
		static int i=50;
		int k;
		if(i==j)
		{
			printf("something");
			k=f(i);
			return 0;
		}
		else retrun 0;
	}
}
