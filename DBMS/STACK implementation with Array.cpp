#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int stack[5];
int top=-1;
int item;

int main()
{
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
	if(top==4)
		printf("\n The stack is Full ...");
	else
	{
		printf("\n Enter a value to insert ::");
			scanf("%d",&item);
			top++;
		stack[top]=item;
	}
}

void pop()
{
	if(top==-1)
		printf("\n Stack is Empty ...");
	else
	{
		item=stack[top];
		printf("\n Item deleted = %d",item);
		top-=1;
	}
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
		printf("%d\t",stack[i]);
}
