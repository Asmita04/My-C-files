#include<stdio.h>
#include<stdlib.h>
int data;

struct node
{
	int data;
	struct node *next;
	
};

void LinkedListTraversal(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("data is: %d\n",ptr->data);
		ptr= ptr->next;
	}
}

struct node * insertAtFirst(struct node* Head,int data)
{
	struct node* ptr= (struct node* ) malloc(sizeof(struct node));
	
	ptr->next=Head;
	ptr->data=data;
	
	return ptr;
	//	break;
}


struct node *insertInBetween(struct node * Head, int data, int index)
{
	struct node* ptr= (struct node*)malloc(sizeof(struct node));
	
	int i=0;
	struct node * p= Head;
	
	while(i!=index-1)
	{
		p= p->next;
		i++;
	}

	ptr->next=p->next;
	p->next=ptr;
	ptr->data=data;
	
	return Head;
//	break;
	
}	
				
struct node * insertAtEnd(struct node *Head, int data)
{
struct node *ptr= (struct node*)malloc(sizeof(struct node));
	struct node * p= Head;
	while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next= ptr;
		ptr->next=NULL;
		ptr->data=data;
				
				
				
	return Head;
			//	break;
	}	

int main()

{
	struct node *Head;
	struct node *Second;
	struct node *Third;
	struct node *Fourth;
	
	
	Head= (struct node *) malloc(sizeof(struct node));
	Second= (struct node*)malloc(sizeof(struct node));
	Third= (struct node*) malloc (sizeof(struct node));
	Fourth=(struct node*)malloc (sizeof(struct node));
	
	//link head to second
	
	Head->data=8;
	Head->next=Second;
	
	//Link second to third
	
	Second->data=10;
	Second->next=Third;
	
	//Link  Second to third
	
	Third->data=15;
	Third->next=Fourth;
	
	//Link Third to fourth
	Fourth->data=48;
	Fourth ->next=NULL;
	
	LinkedListTraversal(Head);
	
int choice;
printf("\n press 1 : To insert Data at the begninng ");
printf("\n press 2:  To insert data in between");
printf("\n press 3:  To insert data at End ");
printf("press 0:  To Exit!!!");
printf("\n");

do{

printf("Select your choice:");
scanf("%d",&choice);


printf("\t YOU HAVE ENTERED CHOICE AS %d \n", choice);

if(choice>3)
{
	printf("You have entered invalid choice!!");
}

switch(choice)
	{
	
	
	
		case 1:
			{
				printf(" Enter the data you wanted to insert at the begnning: ");
				scanf("%d",&data);
				
				Head= insertAtFirst(Head,data);
				LinkedListTraversal(Head);
			
			}
			
			
			
			
			
		case 2: 
			{
				int index;
				printf(" Enter the data you wanted to insert in between node: ");
				scanf("%d",&data);
				
				printf("At what index you wanted to insert:");
				scanf("%d",&index);
				
				Head= insertInBetween(Head,data,index);
				LinkedListTraversal(Head);
			
			}
		
				
				
		case 3:
						 
			{
				printf(" Enter the data you wanted to insert at the End: ");
				scanf("%d",&data);
				
				Head= insertAtEnd(Head,data);
				LinkedListTraversal(Head);
			
			}
			
		
		case 0: 
		{
			printf("Exit!!!");
		}
		 
			
			
			
	}
	}while(choice!=0);
}