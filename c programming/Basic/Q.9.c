/*9. Write a program to accept an integer and check if it is even or odd. */

#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a%2==0)
		{
			printf("\nthe given inetger is an even number:%d",a);
			}
	else
		{
			printf("\n the given number is an odd number:%d",a);
			}

}

   