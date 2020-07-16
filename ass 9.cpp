#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int stack[5];
int top=-1;

int main()
{
	int choice;
	
	do
	{
		printf("\n\n MENU ::");
		printf("\n 1. push::");
		printf("\n 2. pop::");
		printf("\n 3. display::");
		printf("\n 4. Exit::");
			printf("\n Enter choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3:display();
			break;
			
			case 4: exit(0);
			
			default: printf("\n wronf choice. Enter between 1 to 4::");
		}
	}while(choice!=4);
}

void push()
{
	int info;
	
	if(top==4)
		printf("\n Stack is full..");
	else
	{
		printf("\n Enter ana element::");
			scanf("%d",&info);
			top+=1;
			stack[top]=info;
	}
}
void pop()
{
	int info;
	
	if(top==-1)
		printf("\n Stack is Empty..");
	else
	{
		info=stack[top];
			printf("\n Item deleted=%d",info);
			top-=1;
	}
}
void display()
{
	if(top!=-1)
	{
	int i;
	printf("\n Elements are::");
	for(i=top;i>=0;i--)
		printf("\t%d",stack[i]);
	}
	else
		printf("\n stack is empty..");
}
