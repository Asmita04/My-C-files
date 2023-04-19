/*write a function for linear search which accepts an array of n elements &kkey as
 a parameter and returns the postion of key in the array and - if the key  is not found */
#include<stdio.h>
int main()
{
	int i,a[50],key,n;
	printf("enter the size of an array:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
			{
				printf("a[%d]=",i);
				scanf("%d",&a[i]);
			}
	printf("enter the key=");
	scanf("%d",&key);
	for(i=0;i<n;i++)
		{
			if(key==a[i])
			{
				printf("key is at %d position",i);
				return 0;
			}
	//	else
	//	{
		}
				printf("key is not present");
				return -1;
		//	}
			
//	}
}