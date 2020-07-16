// Objective 
// 1. Linked list 

#include<STDIO.H>
#include<STDLIB.h>

typedef struct node
{
	int info;
	struct node *link;
}node;

node *tmp,*p,*start=NULL;

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
	
	while(1)
	{
		printf("\n\n _-------- MENU FOR SINGLY LL _-------");
		printf("\n 1 . Create List ::");
		printf("\n 2. Display list ::");
		printf("\n 3. Delet ::");
		printf("\n 4. Lengh :: ");
		printf("\n 5. Search an Element ::");
		printf("\n 6. Add at begin ::");
		printf("\n 7. Add at end ::");
		printf("\n 8. ADD at pos ::");
		printf("\n 9. Delet at pos ::");
		printf("\n 10. Reverse ::");
			printf("\n Enter a choice :::");
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
			
			default : printf("\n Wrong choice .. Enter Between 1 to 10 ..");
		}
	}	
}

void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a data ::");
		scanf("%d",&tmp->info);
		
	if(start==NULL)
	{
		tmp->link=NULL;
		start=tmp;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
			p=p->link;
		
		p->link=tmp;
		tmp->link=NULL;
	}
	
}

void display()
{
	p=start;
	while(p!=NULL)
	{
		printf("%d-->",p->info);
		p=p->link;
	}
}

void delet()
{
	p=start;
	int key;
	printf("\n Enter a value you want to delet ::");
		scanf("%d",&key);
		
	if(start->info==key)
	{
		start=p->link;
		p->link=NULL;
			printf("\n Item deleted = %d",p->info);
		free(p);
	}
	else
	{
		p=start;
	while(p!=NULL)
		{
			if(p->info==key)
			{
				tmp->link=p->link;
				p->link=NULL;
					printf("\n item deleted  =%d",p->info);
				free(p);
				main();
			}
			tmp=p;
			p=p->link;
		}
		printf("\n Not Found %d on the lisT ..",key);
		main();
	}
}

int count()
{
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		cnt++;
		p=p->link;
	}
	return cnt;
}

void search()
{
	int key,i=1;
	
	printf("\n Enter a key for Search :::");
		scanf("%d",&key);
		
	if(start->info==key)
		printf("%d Item found on position %d",key,i);
	else
	{
		p=start;
		while(p!=NULL)
		{
			if(p->info==key)
			{
				printf("\n %d found on %d position on the list ....",key,i);
				main();
			}
			i++;
			p=p->link;
		}
		printf("\n %d element not FOund on the list ,..",key);
		
	}
}

void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter data :::");
		scanf("%d",&tmp->info);
	tmp->link=start;
	start=tmp;
}

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter data :::");
		scanf("%d",&tmp->info);
		
	p=start;
	while(p->link!=NULL)
		p=p->link;
		
	p->link=tmp;
	tmp->link=NULL;
}

void addatpos()
{
	int i=1,len,pos;
	
	printf("\n Enter pos ::");
		scanf("%d",&pos);
		
	len=count();
	
	if(pos<=0 || pos>len)
		printf("\n invalid Address");
	else
		{
			p=start;
			while(i<pos-1)
			{
				i++;
				p=p->link;
			}
			
			if(pos==1)
				addatbegin();
			if(pos==len)
				addatend();
			else
			{
				tmp=(node*)malloc(sizeof(node));
				printf("\n Enter value ::");
					scanf("%d",&tmp->info);
					
				tmp->link=p->link;
				p->link=tmp;	
			}
		}
}

void delatpos()
{
	int n,len,i=1,pos;
	
	printf("\n Enter pos ::");
		scanf("%d",&pos);
		
	len=count();
	
	if(pos<=0 || pos>len)
		printf("\n invalid Address");
	else
	{
		p=start;
			while(i<pos-1)
			{
				i++;
				p=p->link;
			}
			
		if(pos==1)
			{
				p=start;
				start=p->link;
				p->link=NULL;
				free(p);
			}
			else
			{
				tmp=p->link; 
				p->link=tmp->link;
				tmp->link=NULL;
					printf("\n Item deleted = %d ",tmp->info);
				free(tmp);
			}
	}	
}

void reverse()
{
	node *prev,*next,*curr;
	
	curr=start;
	prev=NULL;
	
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	start=prev;
}

