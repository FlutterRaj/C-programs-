/* CREATION OF SINGLE LINKED LINK LIST,DISPLAY,COUNT,SEARCH,ADD TO LIST,DELET,REVERSE)*/

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

int main(void)
{
	struct node *start=NULL;
	int choice,data,item,pos;
	
	while(1)
	{
		printf("\n\n 1. Create Node::");
		printf("\n 2. Display::");
		printf("\n 3. Count::");
		printf("\n 4. Search::");
		printf("\n 5. Add to empty list/add to begining::");
		printf("\n 6. Add to end::");
		printf("\n 7. Add after node");
		printf("\n 8. Add before node::");
		printf("\n 9. Add a position::");
		printf("\n 10. Delet::");
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
		
		case 4: printf("\n Enter the element for search::");
					scanf("%d",&data);
						search(start,data);
		break;
		
		case 5: printf("\n Enter the element for inserted::");
					scanf("%d",&data);
						start=addatbeg(start,data);
		break;
		
		case 6: printf("\n Enter the element to be inserted::");
					scanf("%d",&data);	
						start=addatend(start,data);
		break;
		
		case 7: printf("\n Enter the element to be inserted::");
					scanf("%d",&data);
					printf("\n Enter the element after which to inserted::");
							scanf("%d",&item);
				start=addafter(start,data,item);
		break;
	
		case 8: printf("\n Enter the element to be inserted::");
					scanf("%d",&data);
						printf("\n Enter the element before which to inserted::");
							scanf("%d",&item);
				start=addbefore(start,data,item);
		break;
		
		case 9: printf("\n Enter the element to be inserted::");
					scanf("%d",&data);
						printf("\n Enter the position at which to insert::");
							scanf("%d",&pos);
					start=addatpos(start,data,pos);
		break;
		
		case 10: printf("\n Enter the element to be deleted::");
					scanf("%d",&data);
						start=del(start,data);
		break;
		
		case 11: start=reverse(start);
		break;
		
		case 12:exit(1);
		
		default: printf("\n Wrong choice ::");
	}
}
return 0;
}

/* CREATION OF A LINKED LIST */

struct node *create_list(struct node *start)
{
	int data;
	printf("\n Enter a value::");
		scanf("%d",&data);
		
		if(start==NULL)
		{
			addatbeg(start,data);

		}
		else
		{
			addatend(start,data);
			//return start;
		}
}

/*INSERTION AT THE BEGINNING OF THE LIST */

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
		return start;
		
}

/* INSERTION AT THE END OF THE LIST */

struct node * addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	
	while(p->link!=NULL)
	p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}

/* DISPLAY OR TRAVERSAL A LINKED LIST */

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("\n The list is empty::\n");
		return;	}
		
		p=start;
		printf("\n Link is::");
		while(p!=NULL)
		{
			printf("%d-->",p->info);
			p=p->link;
		}
	
}

/* COUNT NO. OF NODES*/

void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
	printf("\n Number of Nodes are :: %d",cnt);
}

/* SEARCHING IN A LINKED LIST */
void search(struct node *start,int item)
{
	struct node *p=start;
	int pos=1;
	while(p!=NULL)
	{
		if(p->info==item)
			{
				printf("\n item %d found at position %d\n",item,pos);
			}
		p=p->link;
		pos++;
	}
}

/*INSERTION AFTER A NODE*/

struct node *addafter(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			printf("\n value inserted=%d",tmp->info);
			return start;
		}
		p=p->link;
	}
			printf("\n %d not present in the list\n",item);
	return start;
}

/*INSERTION BEFORE A NODE*/

struct node *addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*p;
		if(start==NULL)
		{
			printf("\n List is empty---\n");
			return start;
		}
		/* if data to be inserted before first node*/
		if(item==start->info)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=start;
			start=tmp;
				printf("\n Value inseted=%d",tmp->info);
			return start;
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
				return start;
			}
			p=p->link;
		}
			printf("\n %d not present in the list\n",item);
		return start;
}

/* INSERTION AT THE GIVEN POSITION*/

struct node *addatpos(struct node *start,int data,int pos)
{
	struct node *tmp,*p;
	int i;
	p=start;
	
	for(i=1;i<pos-1 && p!=NULL;i++)
		p=p->link;
		
		if(p==NULL)
			printf("\n There are less than %d elements\n",pos);
		else
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
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


/* DELETION OF NODE*/

struct node *del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("\n List empty----");
		return start;
	}
	if(start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	
	/*DELETION IN BETWEEN NODES OR AT THE END*/
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
		p=p->link;
	}
	printf("\n Element %d not found \n",data);
	return start;
}

/* REVERSING A LINKED LIST*/

struct node *reverse(struct node *start)
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
return start;
}
