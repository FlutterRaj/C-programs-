#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}node;

node *start=NULL,*tmp,*p;

void create();
void display();
void delet();
int count();
void search();
void addatbegin();
void addatend();
void addatpos();
void delatpos();
void reverse();

int main()
{
	int ch,len;
	
	while(1){
		printf("\n\n 1. Create ::");
		printf("\n 2. Display ::");
		printf("\n 3. Delet ::");
		printf("\n 4. Count ::");
		printf("\n 5. Search ::");
		printf("\n 6. Add at Begin ::");
		printf("\n 7. Add at End ::");
		printf("\n 8. Add at pos ::");
		printf("\n 9. Del at pos ::");
		printf("\n 10. Reverse ::");
		printf("\n 11. Exit ::");
			printf("\n Enter a no ::");
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
			
			case 5: search();
			break;
			
			case 6: addatbegin();
			break;
			
			case 7: addatend();
			break;
			
			case 8: addatpos();
			break;
			
			case 9: delatpos();
			break;
			
			case 10: reverse();
			break;
			
			case 11: exit(0);
			
			default: printf("\n Wrong Choice .. Choose Between 1 to 4 ..!");
		}
	}
}
void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node value ::");
		scanf("%d",&tmp->info);
		
	if(start==NULL)
	{
		tmp->next=NULL;
		start=tmp;
	}
	else
	{
		tmp->next=start;
		start->next=tmp;
	}
	p=start;
	while(p->next!=start)
		p=p->next;
	
	
}

void display()
{
	
}

void delet()
{
	  
}	

int count()
{
	
}

void search()
{
	
}

void addatbegin()
{
	
}

void addatend()
{
	

}

void addatpos()
{
	
}

void delatpos()
{
	
	
}

// -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x--NOT WORKING--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- 
void reverse()
{
	
}
