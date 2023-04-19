//palindrome number
#include<stdio.h>
int main()
{
	int num,temp,sum=0;
	int last_digit;
	printf("Enter the number:");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		last_digit=num%10;
		sum=(sum*10)+last_digit;
		num=num/10;
	}
	printf("Sum:%d",sum);
	if(sum==temp)
	{
		printf("Number is palindrome");
	}
	
	else
	{
		printf("Number is not palindrome");
	}
}