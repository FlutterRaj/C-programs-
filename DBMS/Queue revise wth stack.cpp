#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int front,rear;
int queue[5];

int main()
{
	front=rear=-1;
	int ch;
	
	while(1)
	{
	printf("\n\n MeNU FoR QuEuUe");
	printf("\n 1.push ::");
	printf("\n 2.pop ::");
	printf("\n 3.Display ::");
	printf("\n 4.Exit::");
		printf("\n ENter a choice ::");
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
				default : printf("\n Wrong CHoice .. Select between 1 to 4 ..");
		}
	}
}

void push()
{
	if(rear==4)
		printf("\n Full QUEUE");
	else
	{
		int item;
		printf("\n Enter a vaalue :: ");
			scanf("%d",&item);
		if(front==-1)
			front=rear=0;
		else
			rear+=1;
		queue[rear]=item;
	}
}
void pop()
{
	if(front==-1)
		printf("\n Empty Queue ..");
	else
	{
		int item;
		item=queue[front];
		printf("\n Item deleted = %d",item);
		if(front==rear)
			front=rear=-1;
		else
			front+=1;
	}
}
void display()
{
	int i;
	for(i=front ; i<=rear ;i++)
		printf("%d -- > ",queue[i]);
}
