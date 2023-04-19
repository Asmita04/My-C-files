/*Write a function for Linear Search, which accepts an array of n elements and a key as parameters and returns the position of key in 
the array and -1 if the key is not found. 
(Accept n numbers from the user, store them in an array. Accept the key to be searched and search 
it using this function. Display appropriate messages.)*/
#include<stdio.h>
int linearsearch(int key, int size, int a[])
{
	int i ;
	for(i=0;i<size;i++)
	{
	
	if(key==a[i])
	{
	//	printf("hence the key is prsent at %d position",i);
		return i;
	}
   }
return -1;
}
int main()
{
	int size,key,i;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	
	int a[size];
   for(i=0;i<size;i++)
   {
   	printf("a[%d]=",i);
   	scanf("%d",&a[i]);
   }
   	printf("Enter the key which is to be found:");
	scanf("%d",&key);
	
//	linearsearch(key, size,a);
	printf("hence the key is prsent at %d position",linearsearch(key,size,a));
}