/* creation of a linked list */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *create_list(struct node * start);
struct node *addatbeg(struct node *start,int data);
struct node * addatend(struct node *start,int data);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);

int main()
{
	struct node *start=NULL;
	int choice,data,item,pos;
	
	while(1)
	{
		printf("\n 1. Create List::");
		printf("\n 2. Display::");
		printf("\n 3. Count::");
		printf("\n 4. Search::");
		printf("\n 5. Add to empty list/ Add to begining::");
		printf("\n 6. Add to end::");
		printf("\n 7. Add after a node::");
		printf("\n 8. Add before a node::");
		printf("\n 9. Delet::");
		printf("\n 10. Reverse::");
		printf("\n 11. Reverse::");
		printf("\n 12. Quit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
		switch(choice)
		{
			case 1: start=create_list(start);
			break;
			
			case 2: display(start);
			break;
			
			case 3: count(start);
			break;
			
			case 4: printf("\n Enter a element for search::");
						scanf("%d",&data);
						search(start,data);
			break;
			
			case 5: printf("\n Enter a element to inserted::");
						scanf("%d",&data);
						start=addatbeg(start,data);
			break;
			
			case 6: printf("\n Enter a element to insert::");
					scanf("%d",&data);
					start=addatend(start,data);
			break;
			
			case 7: printf("\n Enter a element to inserted::");
						scanf("%d",&data);
							printf("\n Enter the element before which to inserted::");
								scannf("%d",item);
								
								start=addbefore(start,data,info);
			break;
			
			
			case 8: printf("\n Enter a element to inserted::");
						scanf("%d",&data);
							printf("\n Enter the element before which to inserted::");
								scannf("%d",item);
								
								start=addafter(start,data,info);
			break;
			
			case 9: printf("\n Enter a element to inserted::");
						scanf("%d",&data);
							printf("\n Enter the position you want to store::");
								scannf("%d",pos);
								start=addatpos(start,data,pos);
			break;
			
			case 10: printf("\n Enter the element to be inserted::");
						scanf("%d",&data);
						start=del(start,data);
			break;
			
			case 11: start=reverse(start);
			break;
			
			case 12: quit(0);
			
				default : printf("\n Wrong choice..");		
		}
	}
	
/* CREATION OF NODE */

struct node *create_list(struct node *start)
{
	int i,n,data,end;
	printf("\n Enter the no. of nodes::");
		scanf("%d",&n);
		start=NULL;
		
		if(n==0)
			return start;
		printf("\n Enter the element to be inserted::");
			scanf("%d",&data);
		start=addatbeg(start,data);
		for(i=2;i<=n;i++)
		{
			printf("\Ent the element to be inserted::");
				scanf("%d",&data);
				start=addatend(start,end);
			return start;
		}
}


struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
		return start;
}	

struct node *addatenf(struct node *start,int data)
{
	struct node *tmp,*p;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
		
		p->link=tmp;
		tmp->link=NULL;
			return start;
}

void display(struct node *start)
{
	struct node *p;
	p=start;
	
	while(p->link!=NULL)
	{
		printf("\n %d",p->info);
		p=p->link;
	}
}

void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	p=start;
	
	while(p->link!=NULL)
	{
		cnt++;
		p=p->link;
	}
		printf("\n Numer of elements are=%d",cnt);
}

struct node *search(struct node *start,int data)
{
	struct node *p;
	int pos=1;
	p=start;
	
	while(p!=NULL)
	{
		if(p->link==data)
		{
			printf("\n item found at %d position.",pos);
		}
		p=p->link;
		return start;
		pos++;
	}
}

struct node *addafter(struct node *start,int data,int item)
{
	struct  node *p,*tmp;
	p=start;
	
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->info=data;
			
			tmp->link=p->link;
			p->link=temp;
			printf("\n item insereted..");
				return start;
		}
		p=p->link;
				printf("\n %d is not present in the list",item);
	}
}

/* before a node */

struct node *addatbefore(struct node *start,int data,int data)
{
	struct node *p,*tmp;
	if(start==NULL)	
		printf("\n EMPTY LIST..");
	
	if(item==start->info)
	{
		tmp=(struct node*)malloc(sizeof(struct node));
		addatbeg(struct node start,data);
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		{
			tmp=(struct node *)malloc(sizeof(strut node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
			printf("\n %d is not present in the list",item);
	}
	return start;
}

// insert at gievn position */

struct node *addatpos(struct node *start,int data,int pos)
{
	struct node *p,*tmp;
	int i;
	p=start;
	
	for(i=1;i<pos-1 && p!=NULL;i++)
		p=p->link;
		
		if(p==NULL)
			printf("\n There are less than %d elements",pos);
		else
		{
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->link=data;
			if(pos==1)
			{
				tmp->link=start;
				start=tmp;
			}
			else
			{
				tmp->link=p->link;
				p->link=tmp;
			}
				return start;
		}
}

// Deletion of a node

struct node *del(struct node *start,int data)
{
	struct node *p;
	if(start==NULL)
		{
			printf("\n List is empty ...");
			return start;
		}
	if(start->link==data)
	{
		
	}
}
