//write a recursive function to calculate the sum of digitsof a number till you get a single digit number 
//example:961->16->7   Note : do not use loop
#include<stdio.h>
int digitsum(int num)
{
	int lastdigit,sum=0;
	while(num>0)
	{
		lastdigit=num%10;
		num=num/10;
		//sum=sum+lastdigit;
		
		if(num==0&&sum>9)
		{
			num=sum;
			sum=0;
		}
	}
	return sum;
}
int main()
{
	int num;
	printf("Enter the number=");
	scanf("%d",&num);
int sum=digitsum(num);
	printf("The sum of digits is=%d",sum);
}