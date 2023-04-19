#include<stdio.h>
int main()
{
	union test {
		int a;
		int b;
		
	};
	union test var=10;
	printf("%d","%d",var.i,var.j);
}