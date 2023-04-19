/*Bank offers loan on simple interest, to people belonging to different age group.
The interest rate depends on the age of person.

For children (age between 0 to 17), bank does not offer any loan.
For Adult (age between 18 to 58), bank offers interest rate in followng ways - 
for first three years - interest rate is 10%
Next two years - interest rate is 8%
for all next years - interest is 7%

For, Sr Citizen (age between 59 and above) - 
For first three years - interest rate is 8%
for next two years - interest rate is 6%
for rest of the years - interest rate is 5%*/
#include<stdio.h>
int main()
{
	int age,no_of_years,amount;
	float intrest;
	printf("Enter the age of person:");
	scanf("%d",&age);
	
	printf("Enter number of years:");
	scanf("%d",&no_of_years);
	
	printf("Enter the amount:");
	scanf("%d",&amount);
	
	if('0'>=age && age<='17')
		{
			printf("Bank doesn't offer any loan");
		}

	if ('18'>=age && age<='58'){
	
	
		if(no_of_years>=0 && no_of_years<4)
		{
			intrest=(amount*no_of_years*10)/100;
			printf("Your interest amount after %d years at rate of 10%% p.a is %.2f ",no_of_years,intrest);
		}
		else if(no_of_years>=4 && no_of_years<6)
		{
			intrest=(amount*no_of_years*8)/100;
			printf("Your intrest amount after %d years at rate of 8%% p.a is %.2f ",no_of_years,intrest);
		}
		else
		{
			intrest=(amount*no_of_years*7)/100;
			printf("Your intrest amount after %d years at rate of 7%% p.a is %.2f ",no_of_years,intrest);
		}
}
	if(age >=59)
	{
		if(no_of_years>=0 && no_of_years<4)
		{
			intrest=(amount*no_of_years*8)/100;
			printf("Your intrest amount after %d years at rate of 8%% p.a is %.2f ",no_of_years,intrest);
		}
		else if(no_of_years>=4 && no_of_years<6)
		{
			intrest=(amount*no_of_years*6)/100;
			printf("Your intrest amount after %d years at rate of 6%% p.a is %.2f ",no_of_years,intrest);
		}
		else
		{
			intrest=(amount*no_of_years*5)/100;
			printf("Your intrest amount after %d years at rate of 5%% p.a is %.2f ",no_of_years,intrest);
		}
	}
			
			
			
			
			
			
			
			
			
			
			
			
	
		
	
}