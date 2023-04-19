//write a program to print multiplication table of given number n in reverse order.
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any numer=");
	scanf("%d",&n);
	for(i=10;i;i--)
	{
		printf("\n%d*%d=%d",i,n,i*n);
	}
	
}