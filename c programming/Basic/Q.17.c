/*17. Accept any year as input through the keyboard. Write a program to check whether the year is a leap year or not.
 (Hint leap year is divisible by 4 and not by 100 or divisible by 400)*/
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if((year%400==0)||(year%100!=0&&year%4==0))
	{
		printf("the given year is leap year");
	}
	else
	{
		printf("the given year is not leap year");
	}
	return 0;
	
}