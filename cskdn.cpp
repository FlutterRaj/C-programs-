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
		printf("\n Menu");
		printf("\n --------------------");
		printf("\n push::");
		printf("\n Pop::");
		printf("\n Display::");
			printf("\n Enter choice::");
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
	{
		printf("The stack is full::");	
	}
	else
	{
		printf("Enter an element::");
			scanf("%d",&item);
	}top+=1;
	stack[top]=item;
}

void pop()
{
	int item;
	
	if(top==-1)
	{
		printf("empty::");
	}
	else
	{
	item=stack[top];
	printf("Item deleted=%d",item);	
	}
	top-=1;
}

void display()
{
	int i;
	
	for(i=0;i<=top;i++)
	{
		printf("%d\t",stack[i]);
	}
}
