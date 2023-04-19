//Accept two numbers and find prime numbers between those two.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2 ,count=0;
	printf("Enter first number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	for(int i=1;i<=11;i++)
	{
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
			/*else
			{
			printf("%d\n",i);
			}*/
		}
		if(count==0 && i!=1)
		{
			printf("%d\n",i);

		}
		count=0;
		
	
	}
}
