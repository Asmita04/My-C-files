//Given two arrays num1 and num2 of size m and n respectively 
// 1. merge two array
//2. return the median of the merged sort
#include<stdio.h>
int j=0;
void merge(int *num1,int *num2,int m,int n)
{
	for(int i=m;i<(m+n);i++)
	{
		num1[i]=num2[j];
		j++;
	//	printf("Hii");
	}
}
void printArray(int m, int n,int *num1)
{
	for(int i=0;i<m+n;i++)
	{
		printf("%d,\n",num1[i]);
	}
 
}

int main()
{
	int m,n;
//	int j=0;
	printf("Enter the size os num1:");
	scanf("%d",&m);
	
	printf("\n Enter the size of num2:");
	scanf("%d",&n);
	
	int num1[m];
	int num2[n];
	
	printf("\n Print num1 Array:");
	for(int i=0;i<m;i++)
		{
			printf("\n num1[%d]=",i);
			scanf("%d",&num1[i]);
		}

	printf("\n Print num2 Array:");
	for( j=0;j<n;j++)
		{
			printf("\n num2[%d]=",j);
			scanf("%d",&num2[j]);
		}

printf("resultant array:\n ");	
merge(num1,num2,m,n);
printArray(m,n,num1);

}