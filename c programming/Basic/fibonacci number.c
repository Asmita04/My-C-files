/*write a recursive function to calculate the nth fibonacci number.
use this function in main to display the first n fibonacci numbers.
The recursive definition of nth fibonacci numbers is as follows:fib(n)*/
#include<stdio.h>
int fibo( int N)
{
	int n;
	if(n==1||n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);

	
}

void fibo1(int n) {
	
	int a = 0;
	int b = 1;
	int c = 1;
	
	for(int i = 0; i < n; i++) {
		printf("%d ", c);
		c = a + b;
		
		a = b;
		b = c;
	}
}


int main()
{
	int n,i,a,b,c;
	printf("enter n value=");
	scanf("%d",&n);

     int num=	fibo(n);
	printf("\nHence the fibo series is %d",n);
}