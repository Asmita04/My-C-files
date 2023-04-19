/*12. Accept a character as input and check whether the character is a digit.
 (Check if it is in the range ‘0’ to ‘9’ both inclusive)*/
#include<stdio.h>
int main()
{
	char c;
	printf("enter the charecter=");
	scanf("%c",&c);
	if(0<=c<=9)
	{
		printf("it is digit",c);
			}
		else
		{
			printf("it is not digit",c);
			}

}