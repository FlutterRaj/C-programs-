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
		printf("\n 1. Stack 1::");
		printf("\n 2. Stack 2::");
		printf("\n 3. Exit::");
			printf("Enter your choice::");
				scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: s1();
			break;
			
			case 2: //top=-1;
					s2();
			break;
			
			case 3: exit;
			
			default:printf("\nchoose between 1 to 3::");
		}
	}while(choice!=3);
}

void s1()
{
	int choice1;
	
	do
	{
		printf("\n MENU for stack %d::",choice);
		printf("\n -----------------");
		printf("\n 1. push::");
		printf("\n 2. Pop::");
		printf("\n 3. Display::");
		printf("\n 4. Exit ::");
			printf("\n Enter any choice::");
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
			
			default:printf("Enter b/w 1 to 4::");
		}
	}while(choice1!=4);
}
	
void s2()
{
	int choice2;
	
	do
	{
		printf("\n MENU for stack %d::",choice);
		printf("\n -----------------");
		printf("\n 1. push::");
		printf("\n 2. Pop::");
		printf("\n 3. Display::");
		printf("\n 4. Exit::");
			printf("\nEnter any choice::");
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
			
			default:printf("Enter b/w 1 to 4::");
		}
	}while(choice2!=4);
}

void push()
{
	int item;
	
	if(top==4)
		printf("\n The stack is Full::");
	else
		printf("\n Enter an item to insert::");
			scanf("%d",&item);
			top+=1;
				if(choice==1)	
					stack1[top]=item;
				else
					if(choice==2)
						stack2[top]=item;
}

void pop()
{
	int item;
	
	if(top==-1)
		printf("\n The stack is Empty..");
	else
		{
			if(choice==1)
			{
				item=stack1[top];
				top-=1;
					printf("\n item deleted =%d",item);
			}
			else if(choice==2)
				{
					item=stack2[top];
					top-=1;
						printf("\n item deleted =%d",item);
				}
		}
}

void display()
{
	int i;
	if(top==-1)
		printf("\n The stack is empty..");
	else
	{
		if(choice==1)
		{
			for(i=top;i>=0;i--)
				printf("%d\n",stack1[i]);
		}
		else 
			if(choice==2)
				{
					for(i=top;i>=0;i--)
						printf("%d\n",stack2[i]);
				}
		
	}
}
