/*26. Write a program, which accepts a character from the user and checks if it is an alphabet, digit or punctuation symbol.
 If it is an alphabet, check if it is uppercase or lowercase and then change the case. */
#include<stdio.h>
int main()
{
	char ch,a;
	printf("Enter a charecter=");
	scanf("%c",&ch);
	
	if('a'<=ch&&ch<='z')
	{
		
		printf("The entered charecter is in lowercase");
		//change the charecter in Uppercase
		a=toupper(ch);
		printf("The entered charecter in uppercase=%c",toupper(a));

	}
			
	else if('A'<=ch&&ch<='Z')
	{
		
		printf("The entered charecter is in uppercase");
		a=tolower(ch);
		printf("The entered charecter in lowercase=%c",tolower(a));

	}
		else if('0'<=ch&&ch<='9')
		{
			printf("The entered charecter is digit");
		}
		else
		{
			printf("The entered charecter is special charecter");
	
		}

}