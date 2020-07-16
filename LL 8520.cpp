#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;
node *start=NULL,*tmp,*p;
int item;

void create();
void display();
void addatbegin();
void addatend();
void delet();
void addatpos();
int search();
void reverse();
int count();

int main()
{
	int ch,len;
	while(1)
	{
		printf("\n\n ----- MENU ------");
		printf("\n 1. For create ::");
		printf("\n 2. For Display ::");
		printf("\n 3. Add at Start / Start at begining ::");
		printf("\n 4. Add at End ::");
		printf("\n 5. Delet ::");
		printf("\n 6. Count ::");
		printf("\n 7. Search ::");
		printf("\n 8. Add a node at a position :: ");
		printf("\n 9. Reverse ::");
		printf("\n 10. Quit ::");
			printf("\n Enter a choice ::");
				scanf("%d",&ch);
				
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: addatbegin();
			break;
			
			case 4: addatend();
			break;
			
			case 5: delet();
			break;
			
			case 6: len=count();
					printf("\n Length = %d",len);
			break;
			
			case 7: len=search();
					if(len>=1)
						printf("\n %d found on %d position .",item,len);
					if(len==-1)
						printf("\n %d not found on this position .",item);
			break;
			
			case 8: addatpos();
			break;
			
			case 9: reverse(); 
			break;
			
			case 10: exit(0);
				default: printf("\n Wrong choice ... ");
		}
	}
}
void create()
{
		if(start==NULL)	
			addatbegin();
		else
			addatend();
}

void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a node data ::");
			scanf("%d",&tmp->data);
		printf("\n value inserted = %d",tmp->data);
	tmp->next=start;
	start=tmp;
}

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a node data ::");
			scanf("%d",&tmp->data);
	p=start;
	while(p->next!=NULL)
		p=p->next;
	
	tmp->next=NULL;
	p->next=tmp;
}
	
void display()
{
	p=start;
	while(p!=NULL)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
}

void delet()
{
	int n,len,i=1;
	len=count();
	printf("\n Enter a pos::");
		scanf("%d",&n);
	if(n==1)
	{
		p=start;
		printf("\n item deleted= %d",start->data);
		start=p->next;
		free(p);
	}
	else if(n==len)
	{
		p=start;
		while(p->next!=NULL)
		{
			tmp=p;
			p=p->next;
		}
		printf("\n item deleted=%d",p->data);
		tmp->next=NULL;
		free(p);
	}
	else
	{
		if(n<1 || n>len)
		{
			printf("\n invalid position,\n you have only %d nodes\n",len);
			main();
		}
		
	tmp=start;
			while(i<n-1)
			{
				tmp=tmp->next;
				i++;
			}
			p=tmp->next;
			tmp->next=tmp->next->next;
				printf("\n item Deleted= %d",p->data);	
			free(p);
	}
}

int count()
{
	int cnt=0;
	
	tmp=start;
	while(tmp!=NULL)
	{
		cnt++;
		tmp=tmp->next;
	}
	return cnt;
}

int search()
{
	int cnt=1;
	
	if(start==NULL)
	{
		printf("\n ---- UnderFLow -----");	
		return 0;
	}
		printf("\n Enter a value for search ::");
			scanf("%d",&item);
		p=start;	
		while(p!=NULL)
		{
			if(p->data==item)
				return cnt;
				
				cnt++;
			p=p->next;
		}
		return -1;
}

void addatpos()
{
	int pos,i=1;
	if(start==NULL)
	{
		printf("\n ---- UnderFlow ----");
		main();
	}
	
	printf("\n Enter a pos :: ");
		scanf("%d",&pos);
		
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node data ::");
		scanf("%d",&tmp->data);
		printf("\n value inserted =%d",tmp->data);
		
	p=start;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
		printf("\n %d inserted at %d position .",tmp->data,pos);
	tmp->next=p->next;
	p->next=tmp;
}

void reverse()
{
	node *prev,*next,*curr;
	curr=start;
	prev=NULL;
	
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;			
	}
	start=prev;
		printf("\n After reverse ::");
		display();
	 
}
