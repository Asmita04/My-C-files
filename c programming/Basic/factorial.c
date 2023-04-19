//write a recursive function to find factorial of a given number.
#include<stdio.h>
int factorial(int num)
{
	if(num==1||num==0)
	{
		return 1;
	}
	return factorial(num-1)*num;
	
}
int main()
{
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	
int fact=factorial(num);
	printf("foctroial of %d is=%d",num,fact);
}