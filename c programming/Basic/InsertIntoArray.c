#include<stdio.h>
int temp;
void printArray(int *arr, int size)
{
	printf("Array is:\n");
	for(int i=0;i<=size;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);	
	}

}

void insertElement(int pos,int size,int *arr,int num)
{
	
	for(int i=size;i>=pos;i--)
	{
	
		arr[i]=arr[i-1];
		
	}
	arr[pos-1]=num;
	
	
}
int main()
{
	
	int arr[50],num;
	int size,pos;
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	arr[size];
	
	for(int i=0;i<size;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element you wanted to insert:");
	scanf("%d",&num);
	
	
	printf("Enter the position where you wanted to insert the number:");
	scanf("%d",&pos);
	
	insertElement( pos,  size,arr,num);

	printArray(arr,size);
}