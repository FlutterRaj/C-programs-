// Question no 1. 
// Singly LL 
// Coded by _[Codex_Raj] 

#include<STDIO.H>
#include<STDLIB.h>

typedef struct node
{
	int info;
	struct node *link;
}node;

node *tmp,*p,*start=NULL;

void create();
void display();
void delet();

int main()
{
	int ch,len;
	
	while(1)
	{
		printf("\n\n _-------- MENU FOR SINGLY LL _-------");
		printf("\n 1 . Create List ::");
		printf("\n 2. Display list ::");
		printf("\n 3. Delet ::");
		printf("\n 4. Exit ::");
			printf("\n Enter a choice :::");
				scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: delet();
			break;
			
			case 4: exit(0);
			break;
			
			default : printf("\n Wrong choice .. Enter Between 1 to 4 ..");
		}
	}	
}

void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a data ::");
		scanf("%d",&tmp->info);
		
	if(start==NULL)
	{
		tmp->link=NULL;
		start=tmp;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
			p=p->link;
		
		p->link=tmp;
		tmp->link=NULL;
	}
	
}

void display()
{
	p=start;
	while(p!=NULL)
	{
		printf("%d-->",p->info);
		p=p->link;
	}
}

void delet()
{
	p=start;
	int key;
	printf("\n Enter a value you want to delet ::");
		scanf("%d",&key);
		
	if(start->info==key)
	{
		start=p->link;
		p->link=NULL;
			printf("\n Item deleted = %d",p->info);
		free(p);
	}
	else
	{
		p=start;
	while(p!=NULL)
		{
			if(p->info==key)
			{
				tmp->link=p->link;
				p->link=NULL;
					printf("\n item deleted  =%d",p->info);
				free(p);
				main();
			}
			tmp=p;
			p=p->link;
		}
		printf("\n Not Found %d on the lisT ..",key);
		main();
	}
}

