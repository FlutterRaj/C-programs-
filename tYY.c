#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void intiqueue();

int queue[5];
int choice,info;
int front,rear;

int main(void)
{
	do
	{
		printf("\n Menu::");
		printf("\n --------------");
		printf("\n 1.PUSH::");
		printf("\n 2.POP::");
		printf("\n 3.Display::");
		printf("\n 4.EXIT::");
			printf("\n Enter Choice::");
				scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: push();
		break;
		
		case 2: pop();
		break;
		
		case 3: display();
		break;
		
		case 4:exit;
	}
	}	while(choice!=4);
}

void push()
{
	if(rear<4)
	{
		printf("\n Enter an element::");
			scanf("%d",&info);
		if(front==-1)
			front=rear=0;
		else
			rear=rear+1;
		queue[rear]=info;	
	}
	else
	{
		printf("\n The queue is Full..");
	}
}

void pop()
{
	if(front!=-1)
	{
		info= queue[front];
		if(front==rear)
			front=rear=-1;
		else
			front=front+1;
				printf("\n Item deleted=%d",info);
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
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}
