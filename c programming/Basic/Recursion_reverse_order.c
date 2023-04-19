/* Write a recursive C function to print the digits of a number in reverse order. 
Use this function in main to accept a number and print the digits in reverse order separated by tab.
 Example 3456 6 5 4 3 
(Hint: Recursiveprint(n) = print n if n is single digit number = print n % 10 + tab + Recursiveprint( n/10)*/
#include<stdio.h>
int recursive_print(int num)
{
   if(num/10==0)
    {
	
    	printf("\t %d",num);
	}
	else
	{
		printf("\t%d",num%10);
		recursive_print(num/10);
	}
}
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

recursive_print(num);
	
}