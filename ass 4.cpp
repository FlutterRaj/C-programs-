#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks[20];
};

int main()
{
	int i,j,n,n1;
	struct student stdarr[20];
	
	printf("\n Enter Student Number::");
		scanf("%d",&n);
	printf("\n Enter Subject Number::");
		scanf("%d",&n1);
		
	for(i=0;i<n;i++)
	{
		printf("\n Enter Data for Student %d",i+1);
		printf("\n Enter name::");
			scanf("%s",stdarr[i].name);
		printf("\n Enter Roll::");
			scanf("%d",&stdarr[i].roll);
		for(j=0;j<n1;j++)
		{
			printf("\n Enter Marks for Sub %d::",j+1);
				scanf("%f",&stdarr[i].marks[j]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n Data for Student %d",i+1);
			printf("\n Name = %s",stdarr[i].name);
			printf("\n Roll = %d",stdarr[i].roll);
				for(j=0;j<n1;j++)
				{
					printf("\n Marks for Sub %d=",j+1);
						printf("%.2f",stdarr[i].marks[j]);	
				}
	}
}
