#include<stdio.h>
#define N 10
int queue[N];
int front=-1;
int rear=-1;


void enqueue(int X)
{
	if(rear==N-1)
	{
		printf("OVERFLOW!\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=X; 
	}
	
	else
	{
		rear++;
		queue[rear]=X;
	}
}


void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty:");
		
	}
	else if(front==rear)
	{
		printf("data is :%d\n",queue[front]);
		front=rear=-1;
	}
	else
	{ 
		printf("dequeued element:%d\n",queue[front]);
		front++;
	}
}


void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty!\n");
		
	}
	else 
	{
		for(int  i=front;i<rear+1;i++)
		{
			printf("%d \t,",queue[i]);
		}
	}
}

void peek()
{


	if(front==-1 && rear==-1)
	{
		printf("Queue is empty!");
		
	}
	else
	{
		printf("peek is:%d",queue[front]);
	}
}

int main()
{
//	display();
//	dequeue();
	enqueue(56);
	enqueue(74);
	enqueue(5);
	display();
	printf("\n\n");
	dequeue();
	display();
//	printf(" Queue is :%d",queue[rear]);
//	enqueue(5);
}

