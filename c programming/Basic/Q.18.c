//18. Write a program to accept an integer n and display all even numbers upto n.
#include<stdio.h>
int main()
{
	int n,a;
	printf("enter any inetger");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		if(a%2==0)
		printf("\n even numbers upto %d are=%d",n,a);
	}
	return 0;
 } 