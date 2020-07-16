#include<stdlib.h>
#include<stdio.h>

struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;

void create_list();
void display();
void addatend(int data);
void addatbeg(int data);
int main()
{
	int choice;
	while(1)
	{
		printf("\n ----------- MENU ------------");
		printf("\n 1. insert a element::");
		printf("\n 2. Display::");
		printf("\n 3. exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: create_list();
			break;
			
			case 2: display();
			break;
			
			case 3: exit(0);
			
			default: printf("\n wrong choice..");
		}
	}
}

/* CREATION OF A LINKED LIST */

void create_list()
{
	int i,n,data,end;
	printf("\n Enter the no. of nodes::");
		scanf("%d",&n);
	
		printf("\n Enter the element to be inserted::");
			scanf("%d",&data);
			
			if(start==NULL)
				addatbeg(data);

		for(i=2;i<=n;i++)
		{
			printf("\n Enter the element to be inserted::");
				scanf("%d",&data);
				addatend(data);
		}
}

/*INSERTION AT THE BEGINNING OF THE LIST */

void addatbeg(int data)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
}

/* INSERTION AT THE END OF THE LIST */
void addatend(int data)
{
	struct node *p,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	
	while(p->link!=NULL)
	p=p->link;
	
	p->link=tmp;
	tmp->link=NULL;
}

/* DISPLAY OR TRAVERSAL A LINKED LIST */

void display()
{
	struct node *p;
	if(start==NULL)
	{
		printf("\n The list is empty::\n");
		return;	}
		p=start;
		printf("\n Link is::");
		while(p!=NULL)
		{
			printf("->%d",p->info);
			p=p->link;
		}
}


