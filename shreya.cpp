/* CREATION OF SINGLE LINKED LINK LIST,DISPLAY,COUNT,SEARCH,ADD TO LIST,DELET,REVERSE)*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node * start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void display(struct node *start);

int main(void)
{
	struct node *start=NULL;
	int choice,data,item,pos;
	
	while(1)
	{
		printf("\n\n 1. Create LIst::");
		printf("\n 2. Display::");
		printf("\n 3. Add to empty list/add to begining::");
		printf("\n 4. Add to end::");
		printf("\n 5. Quit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
				
				switch(choice)
	{
		case 1: start=create_list(start);
		break;
		
		case 2: display(start);
		break;
		
		case 3: printf("\n Enter the element for inserted::");
					scanf("%d",&data);
						start=addatbeg(start,data);
		break;
		
		case 4: printf("\n Enter the element to be inserted::");
					scanf("%d",&data);	
						start=addatend(start,data);
		break;
			case 5:exit(1);
		
		default: printf("\n Wrong choice ::");
	}
}
return 0;
}

/* CREATION OF A LINKED LIST */

struct node *create_list(struct node *start)
{
	int i,n,data,end;
	printf("\n Enter the no. of nodes::");
		scanf("%d",&n);
		start=NULL;
		
		if(n==0)
			return start;
		printf("\n Enter the element to be inserted::");
			scanf("%d",&data);
		start=addatbeg(start,data);
		for(i=2;i<=n;i++)
		{
			printf("\nEnter the element to be inserted::");
				scanf("%d",&data);
				start=addatend(start,end);
			return start;
		}
}

/*INSERTION AT THE BEGINNING OF THE LIST */

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
		return start;
}

/* INSERTION AT THE END OF THE LIST */

struct node * addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	
	while(p->link!=NULL)
	p=p->link;
	
	p->link=tmp;
	tmp->link=NULL;
		return start;
}

/* DISPLAY OR TRAVERSAL A LINKED LIST */

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("\n The list is empty::\n");
		return; }
		p=start;
		printf("\n Link is::");
		while(p!=NULL)
		{
			printf("%d\t",p->info);
			p=p->link;
			printf("\n\n");
		}
}
