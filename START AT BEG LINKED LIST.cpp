#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

int main()
{
	struct node *start=NULL;
	int choice,data,item,pos;
	
	printf("\n\n 1. START AT BEGIN::");
	
	int i,n=1;
	
		printf("\n Enter the element to be inserted::");
			scanf("%d",&data);
		//add at beg
		struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	
		//display
		struct node *p;
	
		p=start;
		printf("\n Link is::");
		while(p!=NULL)
		{
			printf("%d\t",p->info);
			p=p->link;
			printf("\n\n");
		}

}

