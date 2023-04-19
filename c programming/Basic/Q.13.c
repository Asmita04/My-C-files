/*13. Write a program, which accepts annual basic salary of an employee and 
calculates and displays the Income tax as per the following rules.
Basic: < 1,50,000 Tax = 0 1,50,000 to 3,00,000 Tax = 20% > 3,00,000 Tax = 30%*/ 

#include<stdio.h>
int main()
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
		

}