#include<stdio.h>
#include<stdlib.h>

int push();
int pop();
int display();
int stack[5];
int top=-1;

int main(void)
{
	int choice;
	do
	{
		
		printf("\n 1.PUSH::");
		printf("\n 2.POP::");
		printf("\n 3.Display::");
		printf("\n 4.Exit::");
		printf("\n Enter your choice::");
			scanf("%d",&choice);
	
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
			
			default: printf("Wrong choice, Enter between 1 to 4::");
		}		
	}while(choice!=4);
}

// push programe

int push()
{
	int item;
	
	if (top==4)
		printf("\n<< The Stack is Full >>\n");
	else
	{
		printf("\nEnter element to insert::");
			scanf("%d",&item);
	}
	top=top+1;
	stack[top]=item;
}

//pop programe

int pop()
{
	int item;
	
	if(top==-1)
		printf("<< \nThe stack is Empty\n >>");
	else
	{
		item = stack[top];
		printf("<< \n Item deleted= %d\n >>",item);
	}
		top=top-1;
}

// Display programe

int display()
{
	int i;
	if(top==-1)
		printf("<< \n The stack is Empty\n >>");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}

