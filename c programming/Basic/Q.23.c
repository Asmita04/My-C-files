/*23. Write a program to accept an integer and reverse the number.
 Example: Input: 546, Output 645. */
#include<stdio.h>
int main()
{
	int num,rev=0;
	printf("enter an integer=");
	scanf("%d",&num);
	
	int rem;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=10*rev+rem;
	}
	printf("the reverse of given number is=%d",rev);
	return 0;
	
}
 
