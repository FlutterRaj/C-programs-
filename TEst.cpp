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
		printf("\nMenu::");
		printf("\n----------------------");
		printf("\n 1. Push::");
		printf("\n 2. Pop::");
		printf("\n 3. Display::");
		printf("\n 4. Exit::");
			printf("\nEnter a choice::");
				scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			case 4:exit;
		}
	}while(choice!=4);
}

// push programe //

void push()
{
	int item;
	
	if(top==4)
		printf("\n Stack is Full..");
	else
	{
		printf("\n Enter element to interest::");
			scanf("%d",&item);
	}
	top=top+1;
	stack[top]=item;	
}

// pop programe //

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n Stack is Empty...");
	else
	{
		item=stack[top];
		printf("\n Item deleted=%d",item);
		top=top-1;
	}
}

// display programe //

void display()
{
	int i;
	
	if(top==-1)
		printf("\n The Stack is Empty..");
	else
	{
		printf("\nElements are=");
			for(i=0;i<=top;i++)
			{
				printf("\t%d",stack[i]);
			}
			printf("\n");
	}
}

