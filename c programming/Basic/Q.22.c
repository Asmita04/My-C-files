//22. Write a program to accept an integer and count the number of digits in the number. 
#include<stdio.h>
int main()
{
	int a,i=0;
	printf("enter the number");
	scanf("%ld",&a);
	while(a>0)
	{
		i=i+1;
		a=a/10;
	}
	printf("number of digits %d",i);
	return 0;
}