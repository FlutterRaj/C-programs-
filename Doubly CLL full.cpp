// doubly circular linked list..

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *head=NULL;
node *tail=NULL;
node *tmp,*p;
int key;

void create();
void display();
void delet();
void delatbegin();
void delatend();
void addatbegin();
void addatend();
void reverse();
int search();
int count();

int main()
{
	int ch,len,se;
	while(1)
	{
		printf("\n\n ------- MENU --------");
		printf("\n 1. Create list::");
		printf("\n 2. Display::");
		printf("\n 3. Delet::");
		printf("\n 4. Count::");
		printf("\n 5. Add or Beginning ::");
		printf("\n 6. Add to End::");
		printf("\n 7. Search::");
		printf("\n 8. Reverse::");
		printf("\n 9. For Exit::");
			printf("\n Enter a choice::");
				scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: delet();
			break;
			
			case 4: if(head==NULL)
						printf("\n --UnderFLow-- \n");
						else
						{
							len=count();
							printf("\n No. of Nodes is/are: %d",len);
						}
			break;
			
			case 5: if(head==NULL)
						printf("\n __Empty list__");
					else
						addatbegin();
			break;
			
			case 6: if(head==NULL)
						printf("\n __Empty list__");
					else
						addatend();
			break;
			
			case 7:se=search();
					if(se==0)
						printf("\n Empty list..\n no element found \n");
					if(se==-1)
						printf("\n %d element no found on the list..\n",key);
					if(se>0)
						printf("\n %d element found on %d position..\n",key,se);
					break;
					
			case 8: reverse();
			break;
			
			case 9: exit(1);
				
			default: printf("\n ____wrong choice____\n");
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
	if(head==NULL)
	{
		tmp->left=NULL;
		tmp->right=NULL;
		head=tail=tmp;
	}
	if(head==tail)
	{
		head->left=tmp;
		head->right=tmp;
		tmp->left=head;
		tmp->right=head;
		tail=tmp;
	}
	else
	{
		tail->right=tmp;
		tmp->left=tail;
		tmp->right=head;
		head->left=tmp;
		tail=tmp;
	}	
}
/* Display program */
void display()
{
	if(head==NULL)
		printf("\n --- UnderFLow ---");
	else
	{
	p=head;
	printf("\n");
	while(p!=tail)
	{
		printf("%d-->",p->data);
		p=p->right;
	}
		printf("%d-->",p->data);
	}
}
/* Delet program */
void delet()
{
	int i=1,len,pos;
	printf("\n Enter a pos::");	
		scanf("%d",&pos);
	len=count();
		if(pos<1 || pos>len)
			printf("%d nodes not avaliable on the list .. \n only %d nodes are avaliable.\n",pos,len);
		else if(pos==1)
			delatbegin();
		else if(pos==len)
			delatend();
		else
		{
			tmp=head;
			while(i<pos-1)
			{
				tmp=tmp->right;
				i++;
			}
			p=tmp->right;
			tmp->right=p->right;
			p->right->left=p->left;
				printf("\n %d no item %d deleted",pos,p->data);
			free(p);
		}
}

void delatbegin()
{
	p=head;
	head=head->right;
	head->left=tail;
	tail->right=head;
		printf("\n item deleted=%d",p->data);
	free(p);
}
/* Del from end*/
void delatend()
{
	tmp=tail;
	p=tail->left;
	p->right=head;
	head->left=p;
			printf("\n item deleted=%d",tmp->data);
	tail=p;
	free(tmp);
}

/* count */
int count()
{
	int cnt=1;
	p=head;
	while(p!=tail)
		{
			cnt++;
			p=p->right;
		}
		return cnt;
	
}

/* Add at beginning */
void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a value::");
		scanf("%d",&tmp->data);
			printf("\n value inserted=%d",tmp->data);
	
	tmp->left=tail;
	tmp->right=head;
	head->left=tmp;
	tail->right=tmp;
	head=tmp;
}

/* Add at end*/

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a value::");
		scanf("%d",&tmp->data);
			printf("\n value inserted=%d",tmp->data);
	
	tmp->left=tail;
	tail->right=tmp;
	tmp->right=head;
	head->left=tmp;
	tail=tmp;
}

/* search */

int search()
{
	int cnt=0;
		printf("\n Enter a value for search::");
			scanf("%d",&key);
	tmp=head;
	while(tmp!=tail)
	{
		if(tmp==NULL)
			printf("\n Empty list ...");
			cnt++;
		if(tmp->data==key)
			return cnt;
		if(tail->data==key)
			return count(); 
		tmp=tmp->right;
	}
	return -1;
}

void reverse()
{
	struct node *prev, *cur, *next;
    cur=head;
    next=cur->right;
	if (head == NULL)
    {
        printf("Cannot reverse empty list.\n");
        return;
	}	else{
		
	        while(cur!=tail)
	        {
	        	prev=cur;
	        	cur=next;
	        	next=cur->right;
	        	cur->right=prev;
			}
			next->right=tail;
			tail=next;
			head=cur; 
	    }																					/* Coded by _[Codex_Raj] */
}
