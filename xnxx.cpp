#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *start=NULL,*tmp,*p,*tail;
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
	 		printf("\n Enter a choice ::");
	 			scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: create();
	 		break;
	 		
	 		case 2: display();
	 		break;
	 		
	 		case 3: delet();
	 		break;
	 		
	 		case 4: delatpos();
	 		break;
	 		
	 		case 5: len=count();
	 				printf("\n Lenght = %d",len);
	 		break;
	 		
	 		case 6: addatbegin();
	 		break;
	 		
	 		case 7: addatend();
	 		break;
	 		
	 		case 8: addatpos();
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

/* create a node*/
void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a value::");
		scanf("%d",&tmp->data);
			printf("\n value inserted=%d",tmp->data);
	if(start==NULL)
	{
		tmp->left=NULL;
		tmp->right=NULL;
		start=tail=tmp;
	}
	if(start==tail)
	{
		start->left=tmp;
		start->right=tmp;
		tmp->left=start;
		tmp->right=start;
		tail=tmp;
	}
	else
	{
		tail->right=tmp;
		tmp->left=tail;
		tmp->right=start;
		start->left=tmp;
		tail=tmp;
	}	
}

/* Display program */
void display()
{
	if(start==NULL)
		printf("\n --- UnderFLow ---");
	else
	{
	p=start;
	printf("\n");
	while(p!=tail)
	{
		printf("%d-->",p->data);
		p=p->right;
	}
		printf("%d-->",p->data);
	}
}

void delet()
{
	int item;
	
	printf("\n Enter a node value for delet ::");
		scanf("%d",&item);
	if(start->data==item)
	{
		delatbegin();
	}
	if(tail->data==item)
	{
		delatend();
	}
	else
	{
		p=start;
		while(p->right!=NULL)
		{
			if(p->data==item)
			{
				p->left->right=p->right;
				p->right->left=p->left;
					printf("\n item deleted = %d",p->data);
				free(p);
			}
			p=p->right;
		}
	}
}

void delatbegin()
{
	p=start->right;
			printf("\n item deleted = %d",start->data);
		start->right=NULL;
		p->left=NULL;
		start=p;
}

void delatend()
{
	p=tail->left;
		tmp=tail;
		p->right=NULL;
		tail=p;
			printf("\n item deleted = %d",tmp->data);
		free(tmp);
}

void delatpos()
{
	int pos,len=count(),i=1;
	printf("\n Enter a postion for delet ::");
		scanf("%d",&pos);
		
	if(pos<1 || pos>len)
	{
		printf("\n invalid location .. only %d nodes present..",len);
		main();
	}
	if(pos==1)
		delatbegin();
	if(pos==len)
		delatend();
	else
	{	
		p=start;
		while(i<pos-1)
		{
			p=p->right;
			i++;
		}
		tmp=p->right;
		p->right=tmp->right;
		tmp->right->left=p;
			printf("\n item deleted = %d ",tmp->data);
		free(tmp);
	}
}

int count()
{
	int cnt=1;
	if(start==NULL)
		printf("\n -- Undeflow --");
	else
	{	
		p=start;
		 while(p->right!=NULL)
		{
			cnt++;
			p=p->right;
		}
			return cnt;
			
	}
}

void addatbegin()
{
	if(start==NULL)
		printf("\n ----- Underflow ----");
	else
	{
		tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a node data ::");
			scanf("%d",&tmp->data);
		start->left=tmp;
		tmp->right=start;
		tmp->left=NULL;
		start=tmp;
	}
}

void addatend()
{
	if(start==NULL)
		printf("\n ----- Underflow ----");
	else
	{
		tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a node data ::");
			scanf("%d",&tmp->data);
		p=start;
			while(p->right!=NULL)
				p=p->right;
				
			p->right=tmp;
			tmp->left=p;
			tmp->right=NULL;
			tail=tmp;
	}
}

void addatpos()
{
	int len=count(),pos,i=1;
	
	printf("\n Enter a pos ::");
		scanf("%d",&pos);
	if(pos<1 || pos>len)
	{
		printf("\n invalid position, In the list only %d nodes present ..",len);
		main();
	}
	tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a node value ::");
			scanf("%d",&tmp->data);
	p=start;
	while(i<pos-1)
	{
		++i;
		p=p->right;
	}
	tmp->left=p;
	tmp->right=p->right;
	p->right->left=tmp;
	p->right=tmp;
}

int search()
{
	int i=1;
	
	if(start==NULL)
	{
		printf("\n --- Underflow ---");
		main();
	}
		printf("\n Enter a value for search ::");
			scanf("%d",&item);
	p=start;
	while(p!=NULL)
	{
		if(p->data==item)
				return i;
		i++;
		p=p->right;
	}
}

void reverse()
{
	if (start == NULL)
    {
        printf("\nCannot reverse empty list.\n");
       main();
	}
	
	node *prev, *cur, *next;
    cur=start;
    next=cur->right;
		
	        while(cur!=tail)
	        {
	        	prev=cur;
	        	cur=next;
	        	next=cur->right;
	        	cur->right=prev;
			}
			next->right=tail;
			tail=next;
			start=cur; 
																								/* Coded by _[Codex_Raj] */
}
