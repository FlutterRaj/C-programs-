#include<stdio.h>
#include<stdlib.h>

int push();
int pop();
int display();

int stack[5];
int top = -1;

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
	int data;
		
	if(top == 4){
		printf("\n Stack is Full ...!");
	}else{
		printf("\n Enter data ::");
			scanf("%d",&data);
		top += 1;
		stack[top] = data;
	}
}

int pop(){
	if(top == -1){
		printf("\n Stack is Empty ..");	
	}else{
		printf("\n Value Deleted = %d",stack[top]);
		top -= 1;
	}
}

int display(){
	int i;
	if(top == -1){
		printf("\n Stack is Empty ..");	
	}else{
		printf("\n Values on the Stack are = ");
		for (i=0 ; i<= top ; i++){
			printf("\t%d",stack[i]);
		}
	}
}
