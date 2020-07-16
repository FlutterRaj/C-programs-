#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int queue1[5];
int queue2[5];

int choice,choice1,choice2,info1,info2;
long front1,rear1,front2,rear2;

 void q1()
 {
 
 	do
 	{
 	printf("\n MEnu For stack %d::",choice);
 	printf("\n ------------------");
	printf("\n 1. push::");
	printf("\n 2. pop::");
	printf("\n 3. Display::");
	printf("\n 4. Exit::");
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
		break;
		
		default: printf("\n Wrong choice. Please enter b/w 1 to 4::");
	}
  	}while(choice1!=4);
 }

void q2()
 {
 
 	do
 	{
 	printf("\n MEnu For stack %d::",choice);
 	printf("\n ------------------");
	printf("\n 1. push::");
	printf("\n 2. pop::");
	printf("\n 3. Display::");
	printf("\n 4. Exit::");
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
		break;
		
		default: printf("\n Wrong choice. Please enter b/w 1 to 4::");
	}
  	}while(choice2!=4);
 }
 
 int main()
 {
 	front1=rear1=-1;
 	front2=rear2=-1;
 	
 	do
 	{
 		printf("\n || MENU ||");
 		printf("\n --------------");
 		printf("\n 1 For Queue 1::");
 		printf("\n 2 For Queue 2::");
 		printf("\n 3 For Exit::");
 			printf("\n Enter a choice::");
 				scanf("%d",&choice);
 				
 	switch(choice)
 	{
 		case 1: q1();
 		break;
 		
 		case 2: q2();
 		break;
 		
 		case 3: exit;
 		
 		default : printf("\n Enter between 1 to 3::");
	 }
	 }while(choice!=3);
 }
 
 void push()
 {
 	if(choice==1)
 	{
	 	if(rear1<4)
	 	{
	 		printf("\n Enter an element::");
			 	scanf("%d",&info1);
			if(front1 == -1)
			{
				rear1=front1=0;
			}			 
			else
				rear1+=1;
				queue1[rear1]=info1;				
		}
		else
			printf("\n dhur lwdaa nai kono value");
	 }
	 else if(choice==2)
	 {
			if(rear2<4)
	 	{
	 		printf("\n Enter an element::");
			 	scanf("%d",&info2);
			if(front2 == -1)
			{
				rear2=front2=0;
			}			 
			else
				rear2+=1;
				queue2[rear2]=info2;				
		}
		else
			printf("\n dhur lwdaa nai kono value");
	}
 }
 	
 void pop()
 {
 	if(choice==1)
 	{
			
		if(front1!=-1)
		{
			info1=queue1[front1];
			if(front1==rear1)
				front1=rear1=-1;
			else
				front1+=1;
				printf("\n item deleted=%d",info1);
		}
		else
			printf("\n empty be varua::");
	}
	else if(choice==2)
	{
			
		if(front2!=-1)
		{
			info2=queue2[front2];
			if(front2==rear2)
				front2=rear2=-1;
			else
				front2+=1;
				printf("\n item deleted=%d",info2);
		}
		else
			printf("\n empty be varua::");
	}
 }
 
 void display()
 {
 	if(choice==1)
 	{
 	int i;
 	
 	for(i=front1 ; i<=rear1 ;i++)
 	{
 		printf("%d\n",queue1[i]);
	}
	}
	
 	else if(choice==2)
 	{
 	int i;
 	
 	for(i=front2 ; i<=rear2 ;i++)
 	{
 		printf("%d\n",queue2[i]);
	}
	}
 }
