/*21. Write a program to accept an integer and check if it is prime or not*/
#include<stdio.h>
int main()
{
	int a,x,y;
	printf("Enter an integer=");
	scanf("%d",&a);
	if(a==1)
	{
		printf("the given integer is not a prime");
	}
	else if(a%2==0&&x>2)
	{
		y=0;
	}
	else
	{
		for(x=3;x<a;x=x+2)
		{
			y=0;
			break;
		}
	}
	
	if(y&&a!=1)
	printf("given integer %d is a prime number",a);
	else 
	printf("given integer is not prime number",a);
	
	
	
}