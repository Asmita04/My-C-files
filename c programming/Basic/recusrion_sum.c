//write a recursive function to calcluate the sum of first n natural numbers.
#include<stdio.h>
int sumOfN(int num)
{
	
	if(num==0)
	{
		return 0;
	}
	
	return sumOfN(num-1)+num;

}

int main()
{
	int num;
	printf("Enter the number upto which sum is to be calculated=");
	scanf("%d",&num);
	int finalSum =sumOfN(num);
	
	printf("Hence the sum is %d",finalSum);
}