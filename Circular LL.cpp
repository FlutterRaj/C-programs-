// Circular linked implementation . [Full programe]

#include<stdio.h>
#include<stdlib.h >

typedef struct node
{
	int info;
	struct node *link;
}node;
node *head=NULL,*tail=NULL,*p,*tmp;
int key;
void create();
void del();
void display();
void delfrompos();
int count();
void delbegin();
void delend();
void addatbegin();
void addatend();
int search();
void reverse();
int main()
{
	int ch,len,n,se;
	
	while(1)
	{
		printf("\n ------- MENU --------");
		printf("\n 1. Create list::");
		printf("\n 2. Display the element::");
		printf("\n 3. Delet element::");
		printf("\n 4. Count::");
		printf("\n 5. Add to empty list/Add to begining::::");
		printf("\n 6. Add End to a list::");
		printf("\n 7. Search an element ::");
		printf("\n 8. Reverse::");
		printf("\n 9. For Quit");
			printf("\n\t Enter a choice::");
				scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: del();
			break;
			
			case 4: len=count();
						printf("\n Lenght =%d",len);
			break;
			
			case 5: addatbegin();
			break;
			
			case 6: addatend();
			break;
			
			case 7: se=search();
					if(se==0)
						printf("\n Empty list..\n no element found \n");
					if(se==-1)
						printf("\n element no found on the list..\n",key);
					if(se>0)
						printf("\n %d element found on %d position..\n",key,se);
					break;
			
			case 8: reverse();
			break;
			
			case 9: exit(1);
				default: printf("\n ____________Wrong choice..!!_________\n");
		}
	}
}

void create()
{
	
	p=(node*)malloc(sizeof(node));
	printf("\n Enter data::");
		scanf("%d",&p->info);
		p->link=NULL;
	if(head==NULL)
		head=tail=p;
	else
	{
		tail->link=p;
		tail=p;
		tail->link=head;
	}
}

void display()
{
	tmp=head;
	
	printf("\nList is=");
	while(tmp->link!=head)
	{
		printf("%d-->",tmp->info);
		tmp=tmp->link;
	}
	printf("%d",tmp->info);
	printf("\n");
}

void del()
{
	int ch;
	while(1)
	{
		printf("\n ----- DELET MENU -----");
		printf("\n\t\t 1 For delet 1st element::");
		printf("\n\t\t 2 For delet Last element::");
		printf("\n\t\t 3 For Delet from a perticular location::");
		printf("\n\t\t 4 For Display::");
		printf("\n\t\t 5 For Quit::");
			printf("\n\t\t Enter a choice::");
				scanf("%d",&ch);
		switch(ch)
		{
			case 1: delbegin();
			break;
			
			case 2: delend();
			break;
			
			case 3: delfrompos();
			break;
			
			case 4: display();
			break;
			
			case 5: main();
		}
	}
}

void delbegin()
{
		tmp=head;
		head=tmp->link;
		tail->link=head;
		tmp->link=NULL;
			printf("\n Item deleted=%d",tmp->info);
		free(tmp);
}
void delfrompos()
{
	struct node *tmp,*p;
	int pos,i=1,len;
	
		tmp=tail->link;
		printf("\n Enter pos::");
			scanf("%d",&pos);
		len=count();
		if(pos<1 || pos>len)
			printf("\n invalid");
		else if(pos==1)
			{
				delbegin();
			}
		else
		{
			while(i<pos-1)
			{
				tmp=tmp->link;
				i++;
			}
			p=tmp->link;
			tmp->link=p->link;
				printf("\n Item deleted=%d",p->info);
			free(p);
		}
}

void delend()
{
		tmp=head;
		while(tmp->link!=tail->link)
		{
			p=tmp;
			tmp=tmp->link;
		}
		p->link=tail->link;
		tail=p;
			printf("\n Item deleted=%d\n",tmp->info);
		free(tmp);
}
int count()
{
	int cnt=1;
	tmp=head;
	
	while(tmp->link!=head)
	{
		cnt++;
		tmp=tmp->link;
	}
	return cnt;
}

void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
	p=head;
	while(p->link!=tail->link)
	{
		p=p->link;
	}
	printf("\n Enter a value::");
		scanf("%d",&tmp->info);
	tmp->link=head;
	tail->link=tmp;
	head=tmp;
}

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a node data::");
		scanf("%d",&tmp->info);
		tmp->link=head;
		tail->link=tmp;
		tail=tmp;
}

int search()
{
	int cnt=0;
	
		if(head==NULL)
			return cnt;
			
	printf("\n Enter a value for search::");
		scanf("%d",&key);
		
	tmp=head;
	while(tmp->link!=head)
	{
		if(tmp==NULL)
			printf("\n No value is present in the list..");
			
			cnt++;
		if(tmp->info==key)
			return cnt;
		if(tail->info==key)
			return count();
			
		tmp=tmp->link;
	}
	return -1;
}
void reverse() 
{
    struct node *prev, *cur, *next;
    cur=head;
    next=cur->link;
	if (head == NULL)
    {
        printf("Cannot reverse empty list.\n");
        return;
	}	else{
		
	        while(cur!=tail)
	        {
	        	prev=cur;
	        	cur=next;
	        	next=cur->link;
	        	cur->link=prev;
			}
			next->link=tail;
			tail=next;
			head=cur;
	    }
}
      																								// By_[Codex_Raj]				

	
