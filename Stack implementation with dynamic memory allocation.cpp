#include<stdio.h>
#include<stdlib.h>

struct node
{
	int no;
	struct node *next;
}*top=NULL;
typedef struct node st;

void push();
void pop();
void display();

int main()
{
	int choice,item;
	
	do
	{
		printf("\n 1. PUSH::");
		printf("\n 2. POP::");
		printf("\n 3. DISPLAY::");
		printf("\n 4. EXIT::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
				
			switch(choice)
			{
				case 1: push();
				break;
				
				case 2: pop();
				break;
				
				case 3: display();
				break;
				
				case 4: exit(0);
				
				default : printf("\n wrong choice..");
			}
	}while(choice!=4);
}

void push()
{
	st *p;
	p=(st*)malloc(sizeof(st));
		printf("\n Enter the num::");
			scanf("%d",&p->no);
		
		p->next=top;
		top=p;
}

void pop()
{
	struct node *p;
	p=top;
	if(top==NULL)
		printf("\n EMPTY...");
	else
	{
		top=top->next;
		printf("\n item deleted=%d",p->no);
		free(p);
	}
}

void display()
{
	struct node *p;
	p=top;
	
	if(p==NULL)
		printf("\n Empty..");
	else
	{
		while(p!=NULL)
		{
			printf("%d\t",p->no);
			p=p->next;
		}
	}
}
