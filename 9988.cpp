#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void intique();

int queue[5];
long front,rear;
int choice,info;

int main()
{
	intique();
	
	do
	{
		printf("\n || MENU ||");
		printf("\n ------------------- ");
		printf("\n 1. Push:: ");
		printf("\n 2. Pop:: ");
		printf("\n 3. Display:: ");
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
			
			default: printf("\n Wrong Choice. please enter between 1 to 4::");
		}
	}while(choice!=4);
}

void push()

{
	if(rear<4)
	{
		printf("\n Enter an element::");
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
		printf("\n The queue is Full ..");
}

void pop()
{
	if(front!=-1)
	{
		info=queue[front];
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
				front+=1;
			printf("\n Item deleted= %d",info);
	}
	else
		printf("\n The queue is Empty..");
}

void intique()
{
	front=rear=-1;
}

void display()
{
	int i;
	
	if(front!=-1)
		{
		printf("\n Elements are:: ");
		for(i=front ; i<=rear ;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
	else
		printf("\n The queue is Empty::");
}
