#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d" ,&n);
	
	int a[n];
	int temp;
	int flag;
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for( int i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag++;
			}
			
			
		}
		if(flag==0)
		{
			break;
		}
	}
	printf("\nAfter sorting:");
	
	for(int i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	
	
}