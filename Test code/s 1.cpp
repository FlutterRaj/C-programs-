#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*top,*top1,*temp;
 

void push(int data);
void pop();
void display();

int cnt = 0;
 
int main()
{
    int no, ch, e;
 
    printf("\n 1 :: For Push");
    printf("\n 2 :: ForPop");
 	printf("\n 3 :: ForDipslay");
    printf("\n 4 :: For Exit");
    
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
            
        case 4:
        	exit(0);
        	
        default :
            printf(" Wrong choice, Please enter correct choice");
        }
    }
}
 
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->next = NULL;
        top->data = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->next = top;
        temp->data = data;
        top = temp;
    }
    cnt++;
}

void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->data);
        top1 = top1->next;
    }
 }
 
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->next;
    printf("\n Popped value : %d", top->data);
    free(top);
    top = top1;
    cnt--;
}
 

