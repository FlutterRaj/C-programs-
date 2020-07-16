#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void intique();

void s1();
void s2();
int choice,info,choice1,choice2;
int queue[5];
int queue1[5];
long front,rear,front1,rear1;

int main()
{
	front=rear=-1;
	
	do
	{
		printf("\n\n MENU::");
		printf("\n ----------------");
		printf("\n 1. For Stack 1::");
		printf("\n 2. For Stack 2::");
		printf("\n 3. For Exit::");
			printf("\n Enter any choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: s1();
			break;
			
			case 2: intique();
					s2();
			break;
			
			case 3: exit;
			
			default: printf("\nChoose between 1 to 4::\n ");
		}
	}while(choice!=3);
}

void s1()
{
	do
	{
		printf("\n\n MENU for stack%d",choice);
		printf("\n -------------------------");
		printf("\n 1. Insert an element::");
		printf("\n 2. Delet an element::");
		printf("\n 3. Display elements ::");
		printf("\n 4.Exit::");
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
			
			default: printf("\n Wrong choice .. \n Enter b/w 1 to 4::");
		}
	}while(choice1!=4);
}
void s2()
{
	do
	{
		printf("\n\n MENU for stack%d",choice);
		printf("\n -------------------------");
		printf("\n 1. Insert an element::");
		printf("\n 2. Delet an element::");
		printf("\n 3. Display elements ::");
		printf("\n 4.Exit::");
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
			
			default: printf("\n Wrong choice .. \n Enter b/w 1 to 4::");
		}
	}while(choice2!=4);
}


void push()
{
	if(choice==1)
	{
	if(rear<4)
	{
		printf("\n Insert element for queue %d::",choice);
			scanf("%d",&info);
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
			rear=rear+1;
			queue[rear]=info;
	}
	else
		printf("\n Queue%d is Full.",choice);
	}
	else if(choice==2)
	{
		if(rear1<4)
	{
		printf("\n Insert element for queue%d::",choice);
			scanf("%d",&info);
		if(front1==-1)
		{
			front1=0;
			rear1=0;
		}
		else
			rear1=rear1+1;
			queue1[rear1]=info;
	}
	else
		printf("\n Queue%d is Full.",choice);
	}
}

void pop()
{
	if(choice==1)
	{
	if(front!=-1)
	{
		info=queue[front];
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			front=front+1;
				printf("\n Item deleted for queue%d =  %d ",choice,info);
	}
	else
	{
		printf("\n Queue%d is Empty.",choice);
	}
	}
	else if(choice==2)
	{
		if(front1!=-1)
	{
		info=queue1[front1];
			if(front1==rear1)
			{
				front1=-1;
				rear1=-1;
			}
			else
			front1=front1+1;
				printf("\n Item deleted from queue%d = %d ",choice,info);
	}
	else
	{
		printf("\n Queue%d is Empty.",choice);
	}
	}
}

void display()
{
	int i;
	
	if(front!=-1)
	{
		if(choice==1)
		{
			printf("\n Elements are:: ");
			for(i=front;i<=rear;i++)
			{	
				printf("%d\t",queue[i]);
			}
		}
		else if(choice==2)
		{
		printf("\n Elements are:: ");
			for(i=front1;i<=rear1;i++)
			{	
				printf("%d\t",queue1[i]);
			}	
		}
	}
	else
		printf("\n Queue is Empty..");
}

void intique()
{
	front=rear=-1;
}
