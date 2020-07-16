#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void choice1();
void choice2();

int stack1[5];
int stack2[5];

int top=-1;
int f;

int call()
{
	int n;
	
	printf("\nWhat stack you want to use ? 1 or 2::\n");
		scanf("%d",&n);
		
		return n;
}

int main()
{	
	do
	{
	f=call();
		if(f==1)
			choice1();
		if(f==2)
			choice2();
		else
			printf("\nYour choice is %d, enter between 1 and 2\n",f);
	}while(f!=2);
}

void choice1()
{
	int choice;
	
	do
	{
		printf("\n MENU for stack 1::");
		printf("\n -----------------");
		printf("\n 1. push::");
		printf("\n 2. Pop::");
		printf("\n 3. Display::");
		printf("\n 4. Want to go Stack 2 ??:");
		printf("\n 5. Exit ::");
			printf("\n Enter any choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: choice2();
			break;
			
			case 5: exit;
		}
	}while(choice !=5);
}

void choice2()
{
	int choice;
	
	do
	{
		printf("\n MENU for stack 2::");
		printf("\n -----------------");
		printf("\n 1. push::");
		printf("\n 2. Pop::");
		printf("\n 3. Display::");
		printf("\n 4. Want to go Stack 1 ??:");
		printf("\n 5. Exit ::");
			printf("\n Enter any choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: choice1();
			break;
			
			case 5: exit;
		}
	}while(choice !=5);
}

void push()
{
	
	int item;
	
	if(top==4)
		printf("\n Full");
	 else if(f==1)
		{
			printf("\n Enter an element::");
				scanf("%d",&item);
				top+=1;		
			stack1[top]=item;
		}
			
		else
		{
			printf("\n Enter an element::");
				scanf("%d",&item);
				top+=1;		
			stack2[top]=item;
		}
}

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n Empty");
	else if(f==1)
		{
			item=stack1[top];
			
			printf("\n item deleted=%d",item);
			
			top-=1;
		}
		else
		{
			item=stack2[top];
			
			printf("\n item deleted=%d",item);
			
			top-=1;
		}
}

void display()
{
	int i;
	
	if(top==-1)
	{
		printf("\n Empty Stack..");
	}
	else
	{
	if(f==1)
	{
		printf("\n Values of stack 1::\n");
			for(i=top;i>=0;i--)
				printf("\n%d\n",stack1[i]);
	}
	else if(f==2)
	{
		printf("\n Values of stack 2::\n");
			for(i=top;i>=0;i--)
				printf("\n%d\n",stack2[i]);
	}
	}
}
