#include<stdio.h>
#include<process.h>  // for Exit function //

/* prototype declation*/
void push();
void pop();
void display();
void s1();
void s2();

/* varibale declataion */
int stack1[5];
int stack2[5];
int choice,choice1,choice2;
int top=-1;

int main()
{
	do
	{
		printf("\n 1. For STACK 1::");
		printf("\n 2. For STACK 2::");
		printf("\n 3. For Exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
			
		switch(choice)
		{
			case 1: s1();
			break;
			
			case 2: s2();
			break;
			
			case 3: exit;
		}
	}while(choice!=3);
}

void s1()
{
	do
	{
	printf("\n MENU for STACK%d::",choice);
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
			break;
				
				default: printf("\n Wrong choice.. Enter between 1 to 4::");
		}	
	}while(choice!=4);	
}

void s2()
{
	do
	{
		printf("\n MENU for STACK%d::",choice);
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
			break;
				
				default: printf("\n Wrong choice.. Enter between 1 to 4::");
		}	
	}while(choice!=4);	
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
	int item1,item2;
	
	if(top==-1)
		printf("\n Stack%d is Empty..",choice);
	else
	{
		if(choice==1)
		{
			item1=stack1[top];
			printf("\n item deleted=%d",item1);
			top--;
		}
		else
		{
			item2=stack2[top];
			printf("\n item deleted=%d",item2);
			top-=1;
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


