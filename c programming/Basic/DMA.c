//Meomory allocation  using calloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,*arr;
	printf("Ente the size of array:");
	scanf("%d",&n);
	
	arr=(int*)calloc(n,sizeof(int))	;
	
	if(arr==NULL)
	{
		
		printf("No memory to allocate!");
		
	}
	else
	{
		printf("\n Array elements are:");
		
		for(int i=0;i<n;i++)
		{
			printf("%d\n",*(arr+i));
		}
	}
}