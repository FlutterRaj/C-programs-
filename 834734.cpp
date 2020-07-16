#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void s1();
void s2();

int stack1[5];
int stack2[5];

int top=-1;
int choice;

int main()
{
	do
	{
		printf("\n MAIN MENU");
		printf("\n 1. Stack 1::");
		printf("\n 2. Stack 2::");
		printf("\n 3. For exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: s1();
			break;
			
			case 2: //top=-1;
					s2();
			break;
			
			case 3: exit;
			
			default:
					printf("\n wrong choice. select between 1 to 3::");
		}
	}while(choice!=3);
}

void s1()
{
	int choice1;
	do
	{
		printf("\n MENU FOR STACK%d",choice);
		printf("\n 1. push::");
		printf("\n 2. pop::");
		printf("\n 3. display::");
		printf("\n 4. exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice1);
				
		switch(choice1)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: exit;
			
			default:
					printf("\n Wrong choice. Enter 1 to 4::");
		}
	}while(choice1!=4);
}


void s2()
{
	int choice2;
	do
	{
		printf("\n MENU FOR STACK%d",choice);
		printf("\n 1. push::");
		printf("\n 2. pop::");
		printf("\n 3. display::");
		printf("\n 4. exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice2);
				
		switch(choice2)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: exit;
			
			default:
					printf("\n Wrong choice. Enter 1 to 4::");
		}
	}while(choice2!=4);
}


void push()
{
	int info;
	
	if(top==4)
		printf("\n Stack%d is Full.",choice);
	else
	{
		printf("\n Enter a element::");
			scanf("%d",&info);
			top+=1;
			if(choice==1)
				stack1[top]=info;
			else
				if(choice==2)
					stack2[top]=info;
	}
}

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n Stack is empty");
	else
	{	
		if(choice==1)
		{
			item=stack1[top];
			printf("\n item deleted=%d",item);
			top--;
		}
		else
			if(choice==1)
			{
				item=stack2[top];
				printf("\n item deleted=%d",item);
				top--;
			}
	}
}

void display()
{
	int i;
	
	if(top==-1)
		printf("\n empty");
	else
	{
		if(choice==1)
		{
			printf("\n elements are::");
			for(i=top;i>=0;i--)
				printf("\t%d",stack1[i]);
		}
		else
			if(choice==2)
			{
				printf("\n elements are::");
				for(i=top;i>=0;i--)
					printf("\t%d",stack2[i]);
			}
	}
}
