#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void intique();

int queue[5];
long front,rear;
int choice,info,i;

int main()
{
	intique();
	do
	{
		printf("\n\n MENU ::");
		printf("\n -------------");
		printf("\n 1. push::");
		printf("\n 2. pop::");
		printf("\n 3. Display::");
		printf("\n 4. Exit::");
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
		}
	}while(choice!=4);
}

void intique()
{
	front=rear=-1;
}

void push()
{
	
	if(rear<4)
	{
		printf("\n Enter element::");
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
		printf("\n Queue is full...");
}

void pop()
{
	if(front!=-1)
	{
		info=queue[front];
			if(front==rear)
			{
				intique();
			}
		else
			front+=1;
			printf("\n Item deleted=%d",info);
				
	}
	else
		printf("\n Queue is Empty..");
}

void display()
{
	if(front!=-1)
	{
		printf("\n Values are::");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
	else
		printf("\n Queue is Empty..");
}
