#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
node *start=NULL,*tmp,*p;
int len,item;

void create();
void display();
void delet();
void delatpos();
void delatbegin();
void delatend();
void addatbegin();
void addatend();
void addatpos();
int search();
void reverse();
void delfrommid();
int count();

int main()
{
	int ch;
	 while(1)
	 {
	 	printf("\n\n ---- MENU -----");
	 	printf("\n 1. Create ::");
	 	printf("\n 2. Display ::");
	 	printf("\n 3. Delet ::");
	 	printf("\n 4. Delet from a pos ::");
	 	printf("\n 5. Count ::");
	 	printf("\n 6. Add at Beginning :: ");
	 	printf("\n 7. Add at end ::");
	 	printf("\n 8. Add at postion ::");
	 	printf("\n 9. Search :: ");
	 	printf("\n 10. Reverse ::");
	 	printf("\n 11. For Quit ::");
	 		printf("\n\t Enter a choice ::");
	 			scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: create();
	 		break;
	 		
	 		case 2: display();
	 		break;
	 		
	 		case 3: delet();
	 		break;
	 		
	 		case 4: if(start==NULL)
			 			printf("\n -- uNderFLow ---");
					else
						delatpos();
	 		break;
	 		
	 		case 5: if(start==NULL)
			 			printf("\n -- uNderFLow ---");
					else
					{
						len=count();
	 						printf("\n Lenght = %d",len);
	 				}
	 		break;
	 		
	 		case 6: addatbegin();
	 		break;
	 		
	 		case 7: addatend();
	 		break;
	 		
	 		case 8: if(start==NULL)
						printf("\n -- underFLow ---- ");
					else
						addatpos();
	 		break;
	 		
	 		case 9: len=search();
	 				if(len>=1)
	 					printf("\n %d item found on %d position .",item,len);
	 				else
	 					printf("\n %d not found on the list.. ",item);
	 		break;
	 		
	 		case 10 : reverse();
	 		break;
	 		
	 		case 11: exit(0);
	 		default: printf("\n Wrong choice...");
		}
	 }
}

void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node value ::");
		scanf("%d",&tmp->data);
	if(start==NULL)
	{
		tmp->next=NULL;
		start=tmp;
	}
	p=start;
	if(start->next==NULL)
	{
		start->next=tmp;
		tmp->next=start;
	}
	else
	{
		while(p->next!=start)
			p=p->next;
		
		tmp->next=start;
		p->next=tmp;	
	}
}

void display()
{
	p=start;
	while(p->next!=start)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
		printf("%d",p->data);
}

void delet()
{
	printf("\n Enter a node data for delet :: ");
		scanf("%d",&item);
	
	tmp=start;
	if(start->data==item)
	{
		delatbegin();
		main();
	}
	else
	{
	while(tmp->next != start && tmp->data!=item)
	{
		p=tmp;
		tmp=tmp->next;
	}
	p->next=tmp->next;
		printf("\n Item deleted= %d ",tmp->data);
	free(tmp);
	}
}

int count()
{
	int cnt=1;
	
	p=start;
	while(p->next!=start)
	{
		++cnt;
		p=p->next;
	}
	return cnt;
}

void delatpos()
{
	int pos,i=1;
	printf("\n Enter a pos ::");
		scanf("%d",&pos);
	len=count();
		if(pos <1 || pos > len)
			printf("\n invalid location .. \n There are only %d nodes are present .",len);
		else
		{
			p=start;
			if(pos==1)
			{
				delatbegin();
				main();
			}
			else{
			while (i<pos-1)
			{
				p=p->next;
				i++;
			}
			tmp=p->next;
			p->next=tmp->next;
				printf("\n Item deleted = %d",tmp->data);
			free(tmp);
			}
		}
}

void delatbegin()
{
	p=tmp=start;
	while(p->next!=start)
			p=p->next;
			
		p->next=start->next;
		start=start->next;
			printf("\n Item delted= %d",tmp->data);
	free(tmp);
}

void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node value :: ");
		scanf("%d",&tmp->data);
	
	p=start;
	while(p->next!=start)
			p=p->next;
			
	tmp->next=start;
	p->next=tmp;
	start=tmp;	
}

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node value :: ");
		scanf("%d",&tmp->data);
	
	p=start;
	while(p->next!=start)
			p=p->next;
			
	tmp->next=start;
	p->next=tmp;
}

void addatpos()
{
	int pos,i=1,len=count();

		printf("\n Enter a pos ::");
			scanf("%d",&pos);
		tmp=(node*)malloc(sizeof(node));
			printf("\n Enter a data :: ");
				scanf("%d",&tmp->data);
		if(pos==1)
		{
			p=start;
			while(p->next!=start)
			p=p->next;
			
			tmp->next=start;
			p->next=tmp;
			start=tmp;	
		}
		else if(pos==len)
		{
			while(tmp->next != start && tmp->data!=item)
			{
			p=tmp;
			tmp=tmp->next;
			}
			p->next=tmp->next;
				printf("\n Item deleted= %d ",tmp->data);
			free(tmp);
		}
		else
		{
			if(pos < 1 || pos > len)
				printf("\n invalid ...");
			else
			{
				while(i<pos-1)
				{
					p=p->next;
					i++;
				}
				tmp=p->next;
				p->next=tmp->next;
				free(tmp);
			}
		}
}

int search()
{
	int i=1;
	len=count();
	printf("\n Enter a value for search :: ");
		scanf("%d",&item);
	p=start;
	while(p->next!=start)
	{
		if(p->data==item)
		{
			return i;
		}
		i++;
		p=p->next;
	}
		if(p->data==item)
		{
			return len;
		}
		else
		return -1;
	
}

void reverse()
{
	struct node *prev, *curr, *next,*last;
	if(start==NULL)
	{
		printf("\n Cannot Reverse empty list ..");
		main();
	}
	last=start;
	prev=start;
	curr= start->next;
	start= start->next;
	
	while(start != last)
	{
		start= start->next;
		curr->next=prev;
		
		prev=curr;
		curr=start;
	}
	curr->next=prev;
	start=prev;
	
	printf("\n LIst is ::");
		display();
}
