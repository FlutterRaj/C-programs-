#include<stdio.h>
#include<stdlib.h> 

void push();
void pop();
void display();

int queue[5];
int front;
int rear;
int item;

int main()
{
	front=rear=-1;
	int ch;
	while(1)
	{
		printf("\n --- MENU ---");
		printf("\n 1. PUSh ::");
		printf("\n 2. POP ::");
		printf("\n 3. DISPLAY ::");
		printf("\n 4. EXIT ::");
			printf("\n Enter a choice ::");
				scanf("%d",&ch);
			switch(ch)
			{
				case 1: push();
				break;
				
				case 2: pop();
				break;
				
				case 3: display();
				break;
				
				case 4: exit(0);
				
				default: printf("\n Wrong choice.. Enter between 1 to 4 ...");
			}
	}
}	

void push()
{
	if(rear==4)
		printf("\n Queue is Full ");
	else
	{
		printf("\n Enter a value ::");
			scanf("%d",&item);
		if(front==-1)
			front=rear=0;
		else
		{
			rear=rear+1;	
		}
		queue[rear]=item;
	}
}

void pop()
{
	if(front==-1)
	{
		printf("\n UnderFLow ...");
		main();
	}
	item = queue[front];
		printf("\n Value Deleted = %d",item);
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
		front+=1;
}

void display()
{
	if(front==-1)
	{
		printf("\n Underflow...");
		main();
	}
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",queue[i]);
	}
}
