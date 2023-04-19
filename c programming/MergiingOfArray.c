#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter size of first array:");
	scanf("%d",&m);
	
	printf("Enter size of Second array:");
	scanf("%d",&n);
	
	int A1[m], A2[n],Res[m+n];
	printf("\nEnter the  values in first array:\n");
	
	for(int i=0;i<m;i++)
	{
		printf("A1[i]:",i);
		scanf("%d",&A1[i]);
	}
	
	printf("\nEnter the  values in Second array:\n");
	
	for(int i=0;i<n;i++)
	{
		printf("A2[i]:",i);
		scanf("%d",&A2[i]);
	}
	
	for(int j=0;j<m+n;j++)
	{
		
	}
	
	
	
}