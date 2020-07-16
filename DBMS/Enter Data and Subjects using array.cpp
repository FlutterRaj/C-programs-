#include<stdio.h>
#include<string.h>

typedef struct student
{
	int roll;
	float marks[20];
	char name[20];
}student;

int main(void)
{
	int n,n1,i,j ;
	student std_array[10];
	
	printf("\n\n Enter number of Students ::");
		scanf("%d",&n);
		if(n<=0)
		{
			printf("\n Minimum Requirement is 1 ...");
			main();	
		}
		else
		{
			printf("\n So, For %d students\n Enter subject number ::",n);
			scanf("%d",&n1);
		}
	for(i=1;i<=n;i++)
	{
		printf("\n ---- Data for Student %d ----",i);
		printf("\n Enter Name ::");
			scanf("%s",std_array[i].name);
		printf("\n Enter Roll ::");
			scanf("%d",&std_array[i].roll);
		for(j=1;j<=n1;j++)
		{
			printf("\n Enter marks for Subject %d ::",j);
				scanf("%f",&std_array[i].marks[j]);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("\n\n ---- Data for Student %d ----",i);
		printf("\n Name = %s ",std_array[i].name);
		printf("\n Roll = %d ",std_array[i].roll);
		for(j=1;j<=n1;j++)
		{
			printf("\n Subject %d marks = %.1f",j,std_array[i].marks[j]);
		}
	}		
}
