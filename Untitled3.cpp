#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();

int choice,info;
int queue[5];
long front,rear;

int main()
{
	front=rear=-1;
	
	do
	{
		printf("\n || MENU ||");
		printf("\n --------------------");
		printf("\n 1. push::");
		printf("\n 2. pop::");
		printf("\n 3. display::");
		printf("\n 4. Exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice );
	
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			 
			case 4: exit;
			
			default: printf("\n Wrong choice. Enter b/w 1 to 4::");
		}
	}while(choice!=4);
}

void push()
{
	if(rear<4)
	{
		printf("\n Enter a value::");
			scanf("%d",&info);
		
		if(front==-1)
		{
			rear=0;
			front=0;
		}
		else
			rear+=1;
			queue[rear]=info;
	}
	else
		printf("\n The queue is Empty::");
}

void pop()
{
	if(front!=-1)
	{
		info=queue[front];
		
		if(rear==front)
			rear=front=-1;
		else
			front+=1;
			printf("\n Item deleted = %d",info);
	}
	else
		printf("\n The Queue is Empty..");
}

void display()
{
	int i;
	
	for(i=front ; i<= rear ; i++)
	{
		printf("%d\n",queue[i]);
	}
}
