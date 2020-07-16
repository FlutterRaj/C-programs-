#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void intique();

int queue[5];
int choice,front,rear;

int main()
{
	intique();
	
	do
	{
	printf("\n MENU::");
		printf("\n ---------------- ");
		printf("\n 1. Insert::");
		printf("\n 2. Delet::");
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
				
				default: printf("\n Wrong choice.. Enter between 1 to 4::");
		}	
	}while(choice!=4);	
}

void push()
{
	int item;
	
	if(rear<4)
	{
		printf("\n Enter an element:");
			scanf("%d",&item);
			
			if(front==-1)
			{
				front=rear=0;
			}
			else
				rear+=1;
				 queue[rear]=item;
	}
	else
		printf("\n Queue is Full.");
}

void pop()
{
	int info;
	
	if(front!=-1)
	{
		info=queue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
			front+=1;
			printf("\n Item deleted=%d",info);
	}
	else
		printf("\n Queue is Empty");
}

void display()
{
	int i;

	printf("\n Elements are::");
	for(i=front;i<=rear;i++)	
		printf("\t %d",queue[i]);
}

void intique()
{
	front=rear=-1;
}

