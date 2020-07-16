#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();

int stack[5];
int top=-1;
int choice;

int main()
{
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
	
	if(top==4)
		printf("\n Stack is full");
	else
	{
		printf("\n Enter a element for insert::");
			scanf("%d",&item);
			top+=1;
			stack[top]=item;
	}
}

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n Stack is Empty..");
	else
	{
		item=stack[top];
		printf("\n Item delted=%d",item);
		top-=1;
	}
}

void display()
{
	int i;
	
	if(top==-1)
		printf("\n Stack is empty");
	else
	{
		printf("\n Elements are::");
		for(i=top;i>=0;i--)
			printf("%d\t",stack[i]);
	}
}
