/*writen a function which accepts a charecter and integer n as paramteter.
and displays the next n charecters.*/
#include<stdio.h>
void printfcharecter(char ch , int n)
{
	int i;
	printf("the next %d charecters are ",n);
		for(i=0;i<n;i++)
		{
			printf("%c",++ch);
			
		}


}


void main()
{
	char ch;
	int n;
	printf("enter the charecter ");
	scanf("%c",&ch);
	printf("enter the integer");
	scanf("%d",&n);
	
	printfcharecter(ch , n);
				
}