//write a program to print multiplication table of given number n.
#include<stdio.h>
int main()
{
	int  i,n;
	
	printf("Enter any number=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",n,i,i*n);
	}
	return 0;
}