#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *left;
	struct node *right;
}node;

node *start=NULL,*tmp,*p;

void create();
void display();
void delet();
int count();
void search();
void addatbegin();
void addatend();
void addatpos();
void delatpos();
void reverse();

int main()
{
	int ch,len;
	
	while(1){
		printf("\n\n 1. Create ::");
		printf("\n 2. Display ::");
		printf("\n 3. Delet ::");
		printf("\n 4. Count ::");
		printf("\n 5. Search ::");
		printf("\n 6. Add at Begin ::");
		printf("\n 7. Add at End ::");
		printf("\n 8. Add at pos ::");
		printf("\n 9. Del at pos ::");
		printf("\n 10. Reverse ::");
		printf("\n 11. Exit ::");
			printf("\n Enter a no ::");
				scanf("%d",&ch);
		switch(ch)
		{
			
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: delet();
			break;
			
			case 4: len=count();
					printf("\n Length = %d",len);
			break;
			
			case 5: search();
			break;
			
			case 6: addatbegin();
			break;
			
			case 7: addatend();
			break;
			
			case 8: addatpos();
			break;
			
			case 9: delatpos();
			break;
			
			case 10: reverse();
			break;
			
			case 11: exit(0);
			
			default: printf("\n Wrong Choice .. Choose Between 1 to 4 ..!");
		}
	}
}

void create()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a value ::");
		scanf("%d",&tmp->info);
	if(start==NULL)
	{
		tmp->left=NULL;
		tmp->right=NULL;
		start=tmp;
	}
	else
	{
		p=start;
		while(p->right!=NULL)
			p=p->right;
		
		tmp->left=p;
		p->right=tmp;
		tmp->right=NULL;
	}
}

void display()
{
	p=start;
	printf("\n List is = \n");
	while(p!=NULL)
	{
		printf("%d-->",p->info);
		p=p->right;
	}
}

void delet()
{
	  int key;
	  
	  printf("\n Enter a item ::");
		scanf("%d",&key);
		
	if(start->info==key)
	{
		p=start;
		start=p->right;
		p->right=NULL;
			printf("\n Item deleted = %d",p->info);
		free(p);
	}
	else
	{
		 p=start;
		 while(p->right!=NULL)
		 {
		 	if(p->info==key)
		 	{
		 		tmp->right=p->right;
		 		p->right->left=tmp;
		 		p->left=NULL;
		 		p->right=NULL;
		 			free(p);
		 			main();
			}
			tmp=p;
			p=p->right;
		 }
	}
	 	p=start;
		while(p!=NULL)
		{
		if(p->info==key)
		{
			tmp->right=p->right;
			p->left=NULL;
				printf("\n Item deleted = %d",p->info);
			free(p);
			main();
		}
		tmp=p;
		p=p->right;
		}
}	

int count()
{
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		cnt++;
		p=p->right;
	}
	return cnt;
}

void search()
{
	int i,key;
	
	printf("\n Enter a value for search ::");
		scanf("%d",&key);
		
		if(start->info==key)
		{
			printf("\n Item found ");
			main();
		}
		else
		{
			p=start;
			
			while(p!=NULL)
			{
				if(p->info==key)
				{
					printf("\n ITem found ..");
					main();
				}
					
				p=p->right;
			}
		}
		printf("\n not found");
}

void addatbegin()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter Data ::");
		scanf("%d",&tmp->info);
	
	tmp->left=NULL;	
	tmp->right=start;
	start->left=tmp;
	start=tmp;
		
}

void addatend()
{
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter Data ::");
		scanf("%d",&tmp->info);
	p=start;
	while(p->right!=NULL)
		p=p->right;
		
	tmp->right=NULL;
	tmp->left=p;
	p->right=tmp;

}

void addatpos()
{
	node *next;
	
	int pos,i=1;
	int len=count();
	
	printf("\n Enter a pos ::");
		scanf("%d",&pos);
	
	if(pos<1 || pos>len)	
		printf("\n Invalid Input ..");
	else
	{
		p=start;
		while(i<pos-1)
		{
			i++;
			p=p->right;
		}
		if(pos==1)
			addatbegin();
		else if(pos==len)
			addatend();
		else
		{
			tmp=(node*)malloc(sizeof(node));
			
				printf("\n Enter Data ::");
					scanf("%d",&tmp->info);
		
			next=p->right;
			tmp->left=p;
			tmp->right=next;
			p->right=tmp;
			next->left=tmp;
		}

	}		
}

void delatpos()
{
	
	int pos,i=1;
	int len=count();
	
	printf("\n Enter a pos ::");
		scanf("%d",&pos);
	
	if(pos<1 || pos>len)	
		printf("\n Invalid Input ..");
	else
	{
		p=start;
		while(i<pos-1)
		{
			i++;
			p=p->right;
		}
		if(pos==1)
		{
			p=start;
		start=p->right;
		p->right=NULL;
			printf("\n Item deleted = %d",p->info);
		free(p);
		}
		else if(pos==len)
		{
			p=start;
		while(p!=NULL)
		{
			tmp->right=p->right;
			p->left=NULL;
				printf("\n Item deleted = %d",p->info);
			free(p);
			main();
		}
		tmp=p;
		p=p->right;
		}
		else
		{
			tmp=p->right;
			p->right=tmp->right;
			tmp->right->left=p;
			tmp->left=NULL;
			tmp->right=NULL;
			free(tmp);
		}

	}		
}

// -x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x--NOT WORKING--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x- 
void reverse()
{
    struct node *current, *temp;

    current = start;
    while(current != NULL)
    {
        /*
         * Swap the previous and next address fields of current node
         */
        temp = current->right;
        current->right = current->left;
        current->left = temp;

        /* Move the current pointer to next node which is stored in temp */
        current = temp;
    }
    
    /* 
     * Swap the head and last pointers
     */
    temp = start;

    printf("LIST REVERSED SUCCESSFULLY.\n");
}
