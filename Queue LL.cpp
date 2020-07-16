#include<Stdio.h>
#include<stdlib.h>

struct node 
{
	int no;
	struct node *next;
}
*front=NULL,*rear=NULL;

typedef struct node queue;

void enque();
void delqueue();
void treverse();

int main()
{
	int ch;
	do
	{
		printf("\n 1. Push::");
		printf("\n 2. Pop::");
		printf("\n 3. Traverse::");
		printf("\n 4. exit::");
			printf("\n Enter your choice::");
				scanf("%d",&ch);
				
		switch(ch)
		{
			case 1: enque();
			break;
			
			case 2: delqueue();
			break;
			
			case 3: treverse();
			break;
			
			case 4: exit(0);
			break;
			
			default: printf("\n wrong choice.");
		}
	}while(ch!=4);
}

void enque()
{
	queue *p;
	
	p=(struct node*)malloc(sizeof(queue));
	printf("\n Enter the no::");
		scanf("%d",&p->no);
		
		if(front==NULL)
		{
			p->next=NULL;
			front=p;
			rear=p;
		}
		else
		{
			p->next=NULL;
			rear->next=p;
			rear=p;
		}
}

void delqueue()
{
	struct node *p;
	if(front!=NULL)
	{
		p=front;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
			front=front->next;
				printf("\n no delet is=%d",p->no);
				free(p);
	}
	else
		printf("\n Queue is Empty..");
}

void treverse()
{
	struct node *p;
	if(front!=NULL)
	{
		p=front;
		while(p!=NULL)
		{
			printf("\t%d",p->no);
			p=p->next;
		}
	}
	else
		printf("\n Queue is Empty..");
}
