#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
int stack[5];
int top=-1;

int main(void)
{
	int choice;
	
	do
	{
		printf("\n ::Menu::");
		printf("\n----------------------------");
		printf("\n 1.PUSH::");
		printf("\n 2.POP::");
		printf("\n 3.Display::");
		printf("\n 4.Exit::");
			printf("Enter your choice::");
				scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			case 4:exit;
		}
	}while(choice!=4);
	}

void push()
{
	int item;
	
	if(top==4)
		printf("\n Stack is Full...");
	else
	{
		printf("\n Enter element::");
			scanf("%d",&item);
	}
	top=top+1;
	stack[top]=item;
}

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n Stack is Full..");
	else
	{
		item=stack[top];
		printf("Item deleted=%d",item);
			top=top-1;
	}
}

void display()
{
	int i;
	
	if(i==-1)
		printf("Stack is Empty..");
	else
	{
		printf("\n Enter elemnts are=");
			
			for(i=0;i<=top;i++)
			{
				printf("%d\t",stack[i]);
			}
	}
}
