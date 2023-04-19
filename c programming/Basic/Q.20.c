// 20. Write a program to accept two integers x and n and compute x^n .
#include<stdio.h>
int main()
{
	int x,n,a=1,i;
	printf("enter two integers=");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		a=a*x;	
	}
	printf("%d^%d=%d",x,n,a);
	return 0;
	
}
	

