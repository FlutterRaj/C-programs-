#include<stdio.h>
#include<conio.h>

struct node
{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
struct node *addatbegin(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void dsiplay(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);

int main()
{
	struct node *start=NULL;
	int choice,data;
	
	while(1)
	{
		printf("\n\n 1. CREATE LIST::");
		printf("\n	 2.	ADD AT BEGIN::");
		printf("\n 	 3. ADD AT END::");
		printf("\n 	 4. DISPLAY::");
		printf("\n 	 5.	COUNT::");
		printf("\n 	 6.	SEARCH::");
		printf("\n 	 7. QUIT::");
			printf("\n ENTER A CHOICE::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: start=create_list(start);
			break;
			
			case 2: printf("\n Enter an element::");
						scanf("%d",data);
					start=addatbegin(start,data);
			break;
			
			casse 3: printf("\n Enter an elemennt::");
						scanf("%d".&data);
					start=addatend(start,data);
			break;
			
			case 4:	 display(start);
			break;
			
			case 5: count(start);
			break;
			
			case 6: printf("\n Enter a element for search::");
						scanf("%d",&data);
					search(data,data);
			break;
			
			case 7:	exit(0);
			
			default: printf("\n Wrong choice.. Choose between 1 to 7::")
		}
	}
}

/* create a list */

struct node *create_list(struct node *start)
{
	int n,i,data;
	
	printf("\n Enter the no of nodes::");
			scanf("%d",&n);
			start=NULL;
		
		if(n==0)
			return start;
		
		printf("\n Enter 1 no. element::");
				scanf("%d",&data);
		start=addatbegin(start,data);
		
		for(i=2;i<=n;i++)
		{	
			printf("\n Enter %d no. element::");
				scanf("%d",&data);
			start=addatend(start,data);
			return start;
		}
}

/* Add at start */
struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(strct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;	
			return start;
}

/* Add at end */
struct node *addatend(struct node *start,int data)
{
	struct node *tmp,*p;
	tmp=(strct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
			p=p->link;
			
		p->link=tmp;
		tmp->link=NULL;
			return start;
}

/* Display */

void display(struct node *start)
{
	struct node *p;
	p=start;
	
	if(start==NULL)
	{
		printf("\n EMPTY....");
		return ;
	}
	while(p!=NULL)
		printf("%d\t",p->info);
		p=p->link;
		printf("\n \n");
	 
}

/* count */

void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	
	if(start==NULL)
		printf("\n EMPTY LIST");
		
		p=start;
		
		while(p!=NULL)
		{
			cnt++;
			p=p->link;
				printf("\n Number of elements are=%d",cnt);
		}
}

void search(struct node *start,int data,int item)
{
	
}
