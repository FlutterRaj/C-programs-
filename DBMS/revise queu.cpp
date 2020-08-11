#include<stdio.h>
#include<stdlib.h>

int push();
int pop();
int display();

int queue[5];
int front = -1;
int rear = -1;

int main(){
	int ch;
	
	while(1){
		printf("\n\n ***** Menu of Stack ******");
		printf("\n 1. Push ::");
		printf("\n 2. Pop ::");
		printf("\n 3. Display::");
		printf("\n 4. Exit ::");
		printf("\n Enter your choice ::");
			scanf("%d",&ch);
			
		switch(ch){
			
			case 1: push();
			break;
			
			case 2: pop();
			break;
			
			case 3: display();
			break;
			
			case 4: exit(0);
			
			default: printf("\n Wrong Choice ...!");
		}
	}
}

int push(){
	int item;
	
	if(rear == 4){
		printf("\n Queue is Full ...!");
	}else{
		printf("\n Enter value :: ");
			scanf("%d",&item);
		if(front == -1){
			front = rear = 0;
			queue[rear] = item;
		}else{
			rear += 1;
			queue[rear] = item;
		}
	}
}

int pop(){
if(front==-1){
		printf("\n Queue is Empty ...!");
	}else{
		printf("\n Value Deleted = %d",queue[front]);
			if(front==rear){
				front=-1;
				rear=-1;
		}
		else
			front+=1;
	}
}

int display(){
	int i;
	
	if(front == -1){
		printf("\n Queue is Empty .....!");
	}else{
		printf("\n Values on Queue are = ");
		for(i=front; i <= rear ; i++){
			printf("\t%d",queue[i]);
		}
	}
}
