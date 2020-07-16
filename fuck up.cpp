#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;

void create_list(void);
void display(void);
int count(void);
void addatend(void);
void addatbegin(void);
void search(void);
void addafter(void);
void addbefore();
void addatpos();
void del();
void reverse();
int len;
int main()
{
	int choice;
			
	while(1)
		{
			printf("\n --------Menu----------");
			printf("\n 1. Create list::");
			printf("\n 2. Display::");
			printf("\n 3. add at begin::");
			printf("\n 4. add at end::");
			printf("\n 5. count::");
			printf("\n 6. Search an element::");
			printf("\n 7. Add Before a node::");
			printf("\n 8. Add After a node::");
			printf("\n 9. Add a position::");
			printf("\n 10. Delet a node::");
			printf("\n 11. Reverse::");
			printf("\n 12. Quit::");
				printf("\n Enter a choice::");
					scanf("%d",&choice);
			switch(choice)
			{
				case 1: create_list();
				break;
				
				case 2: display();
				break;
				
				case 3: addatbegin();
				break;
				
				case 4: addatend();
				break;
				
				case 5: len=count();
							printf("\n LEN = %d",len);
				break;
				
				case 6: search();
				break;
				
				case 7: addbefore();
				break;
				
				case 8: addafter();
				break;
				
				case 9: addatpos();
				break;
				
				case 10: del();
				break;
				
				case 11: reverse();
				break;
				
				case 12: exit(0);
				default: printf("\n Wrong choice..");
			}
	}	}

void display()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf("%d-->",p->info);
		p=p->link;
	}
	if(start==NULL)
		printf("\n Empty list..");
}

int count()
{
	struct node *tmp;
	int cnt=0;
	tmp=start;
	
	if(start==NULL)
		return cnt;
		
		while(tmp!=NULL)
		{
			tmp=tmp->link;
			cnt++;
		}
		return cnt;
}

void addatbegin()
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	
	printf("\n Enter a element::");
		scanf("%d",&tmp->info);
		
		tmp->link=start;
		start=tmp;
}
void addatend()
{
	struct node *tmp,*p;
	tmp=(struct node*)malloc(sizeof(struct node));
	
	printf("\n Enter a element::");
		scanf("%d",&tmp->info);
		
		p=start;
		while(p->link!=NULL)
			p=p->link;
			
		tmp->link=NULL;
		p->link=tmp;
}
void create_list()
{
	struct node *tmp,*p;
	tmp=(struct node*)malloc(sizeof(struct node));
	
	printf("\n Enter a element::");
		scanf("%d",&tmp->info);
	
	if(start==NULL)
	{
		tmp->link=start;
		start=tmp;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
			p=p->link;
			
		tmp->link=NULL;
		p->link=tmp;
	}
}

void search()
{
	struct node *p;
	int pos=1,data;
	p=start;
	
	printf("\n Enter a value for search::");
		scanf("%d",&data);
		
	while(p!=NULL)
	{
		if(p->info==data)
			{
			printf("\n%d element found on %d position",data,pos);
			}
			p=p->link;
			pos++;
	}
}

void addafter()
{
	struct node *p,*tmp;
	p=start;
	int data;
		printf("\n After which node you want to insert::");	
			scanf("%d",&data);
	while(p!=NULL)
	{
		if(p->info==data)
		{
			tmp=(struct node*)malloc(sizeof(struct node));
			printf("\n Enter value::");	
			scanf("%d",&tmp->info);
			tmp->link=p->link;
			p->link=tmp;
				printf("\n Value inseted=%d",tmp->info);
		}
		p=p->link;
	}
	printf("\n %d not present in the list\n",data);
}

void addbefore()
{ 
	int data,item;
	
	printf("\n Enter the element to be inserted::");
		scanf("%d",&data);
	printf("\n Enter the element before which to inserted::");
		scanf("%d",&item);
		
	struct node *tmp,*p;
		if(start==NULL)
		{
			printf("\n List is empty---\n");
				main();
		}
		/* if data to be inserted before first node*/
		if(item==start->info)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=start;
			start=tmp;
				printf("\n Value inseted=%d",tmp->info);
		main();
		}
		p=start;
		while(p->link!=NULL)
		{
			if(p->link->info==item)
			{
				tmp=(struct node *)malloc(sizeof(struct node));
				tmp->info=data;
				tmp->link=p->link;
				p->link=tmp;
					printf("\nvalue inserted=%d",tmp->info);
				main();
			}
			p=p->link;
		}
			printf("\n %d not present in the list\n",item);
}

/* Insertion at the given position .*/

void addatpos()
{
	struct node *tmp,*p=start;
	int data,pos,i;
	
		printf("\n Enter data::");	
			scanf("%d",&data);
		printf("\n Enter Position::");
			scanf("%d",&pos);
	for(i=1;i<pos && p!=NULL;i++)
		p=p->link;
		
	if(p==NULL)
		printf("\n there are less that %d element in the list",pos);
	else
	{
		tmp=(struct node*)malloc(sizeof(struct node));
		tmp->info=data;
		if(pos==1)
		{
			tmp->link=start;
			start=tmp;
				printf("\n %d added on %d position..",data,pos);
		}
		else
		{
			tmp->link=p->link;
			p->link=tmp;
				printf("\n %d added on %d position..",data,i);
		}
	}
}

/* Deletion of a NODE */

void del()
{
	struct node *tmp,*p;
	int data;
	
	printf("\n Enter a node vlaue for delet::");
		scanf("%d",&data);
	if(start==NULL)
	{
		printf("\n List empty----");
		main();
	}
	if(start->info==data)
	{
		tmp=start;
		start=start->link;
				printf("\n Item deleted=%d",tmp->info);
		free(tmp);
	}
	
	/*DELETION IN BETWEEN NODES OR AT THE END*/
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
				printf("\n Item deleted=%d",tmp->info);
			free(tmp);
			main();
		}
		p=p->link;
	}
}

void reverse()
{
	struct node *prev,*ptr,*next;
	prev=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
start=prev;
	printf("\n After Reverse Link is = ");
	display();
}  // coded by_ [codex_Raj]




























