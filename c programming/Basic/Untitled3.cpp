#include<stdio.h>
int main()
{
	int x=4;
	int a=2;
	int b=4;
	int c=8;
	if(x==b) x=a;
	else x=b;
	if(x!=b) c=c+b;
	else c=c+a;
	printf("c=%d\n",c);
}