

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int info;
	struct node *next;
}node;

node *tmp,*p,*start = NULL;

void create();
void display();
void delet();
int count();
void search();
void addAtBegin();
void addAtEnd();
void addAtPos();
void deletAtPos();
void reverse();

int main(){
	int ch,len;
	
	while(1)
	{
		printf("\n\n _-------- MENU FOR SINGLY LL _-------");
		printf("\n 1 . Create List :: ");
		printf("\n 2. Display list :: ");
		printf("\n 3. Delet :: ");
		printf("\n 4. Lengh :: ");
		printf("\n 5. Search an Element :: ");
		printf("\n 6. Add at begin :: ");
		printf("\n 7. Add at end :: ");
		printf("\n 8. ADD at pos :: ");
		printf("\n 9. Delet at pos :: ");
		printf("\n 10. Reverse :: ");
		printf("\n 11. Exit :: ");
			printf("\n Enter a choice :: ");
				scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: delet();
			break;
			
			case 4: len=count();
						printf("\n Length = %d",len);
			break;
			
			case 5:search();
			break;
			
			case 6: addAtBegin();
			break;
			
			case 7: addAtEnd();
			break;
			
			case 8: addAtPos();
			break;
			
			case 9: deletAtPos();
			break;
			
			case 10: reverse();
			break;
			
			case 11: exit(0);
			
			default : printf("\n Wrong choice .. Enter Between 1 to 10 ..");
		}
	}	
}

void create(){
	tmp = (node*)malloc(sizeof(node));
	printf("\n Enter a value :: ");	
		scanf("%d",&tmp->info);
		
	if(start == NULL){
		printf("\n Enter 1st time");
		tmp->next = NULL;
		start = tmp ;
	}else{
		p = start;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
		tmp->next = NULL;
	}
}

void display(){
	p = start ;
	if(p == NULL){
		printf("\n Empty List .. Press 1 for Enter Value !!");
	}else{
		printf("\n");
		while(p != NULL){
			printf(" %d-->",p->info);
			p = p->next;
		}
	printf("\n");
	}
}

void delet(){
	p = start;
	int key;
	
	printf("\n Enter value you want to delete ::");
		scanf("%d",&key);
	
	if(start->info == key){
		start = start->next;
		p->next = NULL;
			printf("\n Value Deleted = %d",p->info);
		free(p);
	}else{
		while(p!=NULL){
			if(p->info == key){
				tmp->next = p->next;
					p->next = NULL;
				printf("\n Item deleted = %d",p->info);
				free(p);
				return;
			}
			tmp = p;
			p = p->next;
		}
		printf("%d not found on the Lit ...!",key);
	}
}

int count(){
	int cnt;
	
	p = start;
	while(p != NULL){
		cnt++;
		p = p->next;
	}
	return cnt;
}

void search(){
	int key , i = 1;
	
	printf("\n Enter what you value to find :: ");
		scanf("%d",&key);
		
	if(start->info == key){
		printf("\n %d found on %d position",key,i);
	}else{
		p = start;
		while(p != NULL){
			if(p->info == key){
				printf("\n %d found on %d position",key,i);
				return;
			}
			i++;
			p = p->next;
		}
		printf("\n %d not found on the list ...!",key);
	}
}

void addAtBegin(){
	tmp = (node*)malloc(sizeof(node));
	printf("\n Enter a value :: ");	
		scanf("%d",&tmp->info);
	tmp->next = start;
	start = tmp;	
	
}

void addAtEnd(){
	tmp = (node*)malloc(sizeof(node));
	printf("\n Enter a value :: ");	
		scanf("%d",&tmp->info);
		
	p = start ;
	while(p->next != NULL){
		p = p->next;
	}
	p->next = tmp;
	tmp->next = NULL;
}


void addAtPos(){
	int i=1 , len , pos;
	
	printf("\n Enter pos :: ");
		scanf("%d",&pos);
		
	len = count();
	
	if(pos <=0 || pos > len){
		printf("\n Invalid Position ...!");
	}else{
		p = start;
		
		while (i < pos-1){
			i++;
			p=p->next;
		}
		
		if(pos == 1){
			addAtBegin();
		}else if (pos == len){
			addAtEnd();
		}else{
			tmp = (node*)malloc(sizeof(node));
			printf("\n Enter a value :: ");	
				scanf("%d",&tmp->info);
				
			tmp->next = p->next;
			p->next = tmp;
		}
	}
}

void deletAtPos(){
	int i=1,pos,len=count();
	
	printf("\n Enter Pos :: ");
		scanf("%d",&pos);
		
	if(pos <= 0 || pos > len){
		printf("\n Invalid position .....!");
	}else{
		p = start;
		while( i < pos-1){
			i++;
			p = p->next;
		}
		
		if(pos == 1){
			start = start->next;
			p->next = NULL;
				printf("\n Item deleted = %d ",p->info);
			free(p);
		}else{
			tmp = p->next;
			p->next = tmp->next;
			tmp->next = NULL;
				printf("\n Item deleted = %d ",tmp->info);
			free(tmp);
		}
	}	
}

void reverse(){
	node *prev,*next,*curr;
	
	curr = start;
	prev = NULL;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	start = prev;
}

