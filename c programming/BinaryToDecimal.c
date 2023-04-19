//Binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int Binary_num ,last_digit,temp=0,sum=0;
	int base=1;
	printf("Enter the binary number:");
	scanf("%d",&Binary_num);
	
	while(Binary_num!=0)
	{
		last_digit=Binary_num%10;
		//sum=sum+last_digit*pow(2,temp);
		sum=sum+last_digit*base;
	//	temp++;
		base=2*base;
		Binary_num=Binary_num/10;
	}
	printf("Decimal_number:%d",sum);
	
	
	
	
	
	
	
}