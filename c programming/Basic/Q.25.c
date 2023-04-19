//25. Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……)
#include<stdio.h>
int main()
{
	int i, n,a=1,b=1,c;
	printf("enter n value ");
	scanf("%d",&n);
	printf("first %d fibonancci numbers are=",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
	
	c=a+b;
	a=b;
	b=c;
	
}
}