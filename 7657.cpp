#include<stdio.h>
#include<process.h>

void push();
void pop();
void display();
void treverse();
	
int queue[5];
long front,rear;
int choice,info;
	
	int main()
	{
		treverse();
		
		do
		{
			printf("\n || MENU ||");
			printf("\n -------------------");
			printf("\n Insert::");
			printf("\n Delet::");
			printf("\n Display::");
			printf("\n Exit::");
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
				
				default : printf("\n Wrong choice.. please enter b/w 1 to 4::");
			}
		}while(choice!=4);
	}
	
	void push()
	{
		if(rear<4)
		{
			printf("\n Enter a value::");
				scanf("%d",&info);
			
			if(front==-1)
			{
				front=rear=0;
			}
			else
			{
				queue[rear]=info;
				rear+=1;
			}
		}
		else
			printf("\n Queue is Full");
	}
	
	void pop()
	{
		if(front!=-1)
		{
			info=queue[front];
			if(rear==front)
			{
				rear=front=-1;;
			}
			else
			{
				printf("\n Item deleted=%d",info);
				front+=1;
			}
		}
		else
			printf("\n Queue is empty");
	}
	
	void treverse()
	{
		front=rear=-1;
	}
	
	void display()
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
