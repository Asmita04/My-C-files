#include<stdio.h>
int main()
{
	int size,i,max1,max2,temp=0;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	
	int a[size];
	for(i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	max1=a[0];
	max2=a[1];
	
	if(max1<max2)
	{
		temp=max1;
		max1=max2;
		max2=temp;
	}
	for(int i=2;i<size;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			
			max1=a[i];
		}
	
			else if(a[i]>max2&&a[i]!=max1)
					{
					max2=a[i];
					}
	
	
}
	printf("The first largest number is=%d",max1);
	printf("\nThe second is=%d",max2);
	printf("\naverage of both numbers is =%d",(max1+max2)/2);

	return 0;
}