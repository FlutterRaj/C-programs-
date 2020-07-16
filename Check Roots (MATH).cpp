#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float disc,d;
	float root1,root2;
	
	printf("Enter integer co-eff A then B then C::");
		scanf("%d %d %d",&a,&b,&c);
		
	disc = b*b - 4*a*c;
	
	if(disc>0)
	{
		printf("The roots are Real\n");
		d= sqrt(disc);
		root1 = (-b+d) / (2*a);
		root2  = (-b-d) / (2*a);
			printf("The roots are %f %f",root1,root2);
	}
    else if(disc==0)
  	  		{
				printf("Roots are Equal\n");
				root1 = -b/2*a;
				printf("The root is %f",root1);
	 		}
		else
			printf("Roots are Complex\n");
			{
				root1=(-b/2*a)+d/2*a;
				root2=(-b/2*a)-d/2*a;
					printf("The roots are %f %f",root1,root2);
			}		
}
