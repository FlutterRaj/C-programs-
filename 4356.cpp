#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int queue[5];
int top=-1;
int choice;

int main()
{
	do
	{
		printf("\n || MENU ||");
		printf(" --------------- ");
		printf("\n 1. insert ::");
		printf("\n 2. delet ::");
		printf("\n 3. Display ::");
		printf("\n 4. Exit::");
			printf("\n Enter an choice ::");
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
			
			default: printf("\n Wrong choice.. Enter b/w 1 to 4 ::");	
		}	
	}while(choice!=4);				
}

void push()
{
	int info;
	
	if(top==4)
	{
		printf("\n Queue is Full ..!");
	}
	else
	{
		printf("\n Enter an element ::");
			scanf("%d",&info);
			top+=1;
		queue[top]=info;
	}
}

void pop()
{
	int info;
	
	if(top==-1)
		printf("\n Queue is Empty..!");
	else
	{
		info=queue[top];
		printf("\n Item deleted = %d ",info);
		top-=1;
	}
}

void display()
{
	int i;
	printf("\n Elements are ::");
	for(i=top ;i >=0 ;i --)
	{
		printf("%d\n",queue[i]);
	}
}
