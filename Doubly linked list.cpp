#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *head=NULL;
struct node *tail=NULL;

void create();
void delpos1();
void delatpos(int pos);
void addatbegin();
void del();
void dellastpos();
int length();
void treverse();
	
int main()
{
	int ch,count,data;
	
	while(1)
	{
		printf("\n 1.Create ::");
		printf("\n 2.del::");
		printf("\n 3.Length::");
		printf("\n 4.treverse::");
		printf("\n 5.Exit::");
			printf("\n Enter a ch:::");
				scanf("%d",&ch);
				
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: del();
			break;
			
			case 3: count=length();
				printf("\n No of nodes is::%d",count);
				break;
				
			case 4: treverse();
			break;
			
			case 5: exit(0);
			
			default: printf("\n Enter between 1 to 5::"); 
		}
	}
}

void create()
{
	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter a element to insert::");
			scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		
		if(head==NULL)
		{
			head=temp;
			tail=NULL;
		}
		
		else
		{
			struct node *p;
			p=head;
			
			while(p->right!=NULL)
				p=p->right;
				
			p->right=temp;
			temp->left=p;
			tail=p;
		}
}

void addatbegin()
{
	struct node *temp;
	
	temp=(struct node*)malloc(sizeof(struct node));
	
		printf("\n Enter a value to print::");
			scanf("%d",&temp->data);
			
		temp->left=NULL;
		temp->right=NULL;
		
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			temp->right=head;
			head->left=temp;
			head=temp;
		}
}

int length()
{
	struct node *temp=head;
	int count=0;
	
	while(temp!=NULL)
	{
		count++;
			temp=temp->right;
	}
	return count;
}

void treverse()
{
	struct node *temp=head;
	
	if(temp==NULL)
		printf("\n List is empty..");
	else
	{
		while(temp!=NULL)
		{
			printf("\%d->",temp->data);
				temp=temp->right;
		}
	}
}
void del()
{
	int pos;
	int ch;
		if(head==NULL)
		printf("\n Empty list...");
		else{
	while(1)
	{
		printf("\n 1. del 1 no node::");
		printf("\n 2. del last node ::");
		printf("\n 3. Enter a pos to del a noode[int value]::");
		printf("\n 4. treverse::");
		printf("\n 5. Exit::");
			printf("\n\n Enter a ch::");
				scanf("%d",& ch);
		switch(ch)
		{
			case 1: delpos1();
			break;
			
			case 2: dellastpos();
			break;
			
			case 3: printf("\n Enter a pos");
						scanf("%d",&pos);
						delatpos(pos);
			break;
			
			case 4: treverse();
			break;
			
			case 5: main();
			
			default: printf("\n wrong ch..");			
		}
	}}
}

void delatpos(int pos)
{
	struct node *p;
	int i;
	 	
		p=head;
		for(i=1;i<pos && p!=NULL;i++)
			p=p->right;
			
		if(pos==1)
			delpos1(); 
		 
		else if(p==tail)
		 	dellastpos();
		 	
		else if(p!=NULL)
		{
			p->left->right=p->right;
			p->right->left=p->left;
				printf("\n del=%d",p->data);    // treverse msg
  			free(p);
		 }
		
		else
		  printf("\n the given position is invalid");
}

void delpos1()
{
	struct node *temp;
		temp=head;
		head=head->right;
		printf("\n item del=%d",temp->data); 	/* treverse msg*/
		free(temp);
}

void dellastpos()
{
		struct node *p,*temp;
		p=head;
		
		while(p->right!=NULL)
			p=p->right;
		
		temp=p->left;
		temp->right=NULL;
		printf("\n item del=%d",p->data);  // treverse msg
		free(p);	
}



