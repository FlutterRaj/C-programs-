#include<stdio.h>
#include<process.h>

int queue[5];
long front,rear;
int choice,info;

void intiqueue();
void push();
void pop();
void display();

int main(void)
{
	intiqueue();
	
	do
	{
		printf("\n Menu ::");
		printf("\n ----------------");
		printf("\n 1.PUSH::");
		printf("\n 2.POP::");
		printf("\n 3.DISPLAY::");
		printf("\n 4.EXIT::");
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
			
			case 4: exit;
			break;
			
			default:printf("\n Wrong choice.. Enter b/w 1 to 4::");
		}
	}while(choice!=4);	
}
// push programe //
void push()
{
	if(rear<4)
	{
		printf("\n Enter the no::");
			scanf("%d",&info);
			if(front==-1)
			{
				front=0;
				rear=0;
			}
			else
				rear=rear+1;		
	queue[rear]=info;
	}
	else
		printf("\n Queue is Full");	
}
//pop programe//
void pop()
{
	if(front!=-1)
	{
		info=queue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
			front=front+1;
				printf("\n Deleted no is %d",info);
	}
	else
	printf("\n Queue is Empty..");
}

void intiqueue()
{
	front=rear=-1;
}

void display()
{	
	int i;
	if(front!=-1 && rear!=-1)
	{
		printf("\n Elements are::");
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",queue[i]);
		}
	}
	else
		printf("\n The queue is Empty..");
}
