// Question no 4. 
// Circular LL
// Coded by _[Codex_Raj]

#include<stdio.h>
#include<stdlib.h >

typedef struct node
{
	int info;
	struct node *link;
}node;
node *head=NULL,*tail=NULL,*p,*tmp;

void create();
void del();
void display();
void delbegin();
void delend();
void delfrompos();
int count();

int main()
{
	int ch,len,n,se;
	
	while(1)
	{
		printf("\n ------- MENU --------");
		printf("\n 1. Create list::");
		printf("\n 2. Display the element::");
		printf("\n 3. Delet element::");
		printf("\n 4. For Quit");
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
			
			case 4: exit(1);
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

// for del from pos we use Count
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
