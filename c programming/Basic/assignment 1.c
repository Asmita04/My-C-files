
/*9. Write a program to accept an integer and check if it is even or odd. 
10. Write a program to accept three numbers and check whether the first is between the other two numbers.
 Ex: Input 20 10 30. Output: 20 is between 10 and 30 
  11. Write a program to accept a number and check if it is divisible by 5 and 7
12. Accept a character as input and check whether the character is a digit. (Check if it is in the range ‘0’ to ‘9’ both inclusive) 
13. Write a program, which accepts annual basic salary of an employee and calculates and displays the Income tax as per the following rules. 
Basic: < 1,50,000 Tax = 0 1,50,000 to 3,00,000 Tax = 20% > 3,00,000 Tax = 30%*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int choice;
	printf("\npress 1 for to check whether given integer is odd or even");
	printf("\npress 2 for to check whether the first number is between the other two"); 
	printf("\npress 3 for to check whether given number is divisible by 5 and 7");
	printf("\npress 4 for to check whether the charecter is digit");
	printf("\npress 5  for to calculating income tax of an employee");
	printf("\npress 6 to exit the program ");
	
	printf("\n\nenter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				int a;
				printf("enter the number:");
				scanf("%d",&a);
				if(a%2==0)
				{
					printf("\nthe given inetger is an even number:%d",a);
				}
				else
				{
					printf("\n the given number is an odd number:%d",a);
				}
				break;
				
			}
			case 2:
				{
					float a1,a2,a3;
					printf("enter the three numbers:");
					scanf("%f%f%f",&a1,&a2,&a3);
					if(a2<a1<a3)
					{
						printf("\n the number %f is in between other two %f and %f ",a2,a1,a3);
					}
					else
					if(a1<a2&&a2<a3)
					{
						printf("n the number %f is not in between other two %f and %f",a2,a1,a3);
					}
					break;
				}
				
				case 3:
					{
						int a;
						printf("enter the number ");
						scanf("%d",&a);
						if(a%5==0,a%7==0)
						{
							printf(" then given number %d is divisible by 5 and 7 ",a);
						}
						else
						{
							printf(" then given number %d is not divisible by 5 and 7 ",a);
						}
						break;
			
						
					}
					case 4:
						{
							char c;
							printf("enter the charecter=");
							scanf("%ch",&c);
							if(0<=c<=9)
							{
								printf("it is digit",c);
							}
							else
							{
								printf("it is not digit",c);
							}
							break;
							
															
						}
					
					case 5:
						{
							float a,tax;
							printf("enter the annual basic salary of an employee: ");
							scanf("%f",&a);
							if(a<1,50,000)
							{
								printf("payable tax for an employee is = 0");
						}
						else if(1,50,000<=a&&a<=3,00,00)
							{
								tax=(0.2*a);
							
								printf("\n payable tax for an employee is%f =",tax);
							}
						else(a>3,00,000);
						{
							tax=(0.3*a);
						
							printf("\n payable tax for an employee is =%f",tax);	
						}
		
							break;																		
						}
						
					
							
			
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}