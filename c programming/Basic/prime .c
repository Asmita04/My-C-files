// WAP to accepts n numbers and store all prime numbers in an array called  prime.display this array.
#include<stdio.h> 
int isprime(int num)           //function define
{
	int i;
		if(num<=1)
		return 0;
	
	for(i=2;i<num;i++) 
	{
		if(num%i==0)
		return 0;
	
	}
return 1;
}

int main()
{
	int i,size,j;
	printf("enter the size of an array");
	scanf("%d",&size);
	
	int a[size];
	for(i=0;i<size;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
	int prime[size],count=0;
	for(i=0;i<size;i++)
	
		{
				if(isprime(a[i]))
			{
				prime[count]=a[i];
				count++;
			}
		}
	printf("the total numbers of prime numbers in an array are %d and they are=",count);
	for(j=0;j<count;j++)
		{
			printf("\t%d\t",prime[j]);
		}
	return 0;		        
}