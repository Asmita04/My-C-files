//Insertion_sort
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of list:");
	scanf("%d",&n);
		
	int a[n],j;
	int temp;
	//printing array
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	//sorting
	for(int i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	
		
	}

	printf("\nAfter sort\t");
	
	for(  j=0;j<n;j++)
	{
		printf("%d,",a[j]);
	}
}