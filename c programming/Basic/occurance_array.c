 /*Write a function, which accepts an integer array and an integer as parameters and counts the occurrences of the number in the array.*/
#include<stdio.h>
int occurance(int size,int occ[],int a[], int count=0)
{
	int i;
	//int count=0;
	for(i=0;i<size;i++)
	{
		if(a[i]==occ[i])
		count++;
	}
return count;
	
}

int main()
{
	int size,i,count;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	int occ[size];
	occurance(size,occ,a,count);
	printf("Hence the occurance of the number in array is %d times",occurance(size,occ,a,count));
	
}