/*27. Write a menu driven program to perform the following operations till the user selects Exit.
 Accept appropriate data for each option. Use standard library functions from math.h 
i. Sine ii. Cosine iii. log iv. ex v. Square Root vi. Exit */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int choice;
	float a;
	do
	{
	
	printf("\npress 1 for  sine   function");
	printf("\npress 2 for  cosine function");
	printf("\npress 3 for  log    function");
	printf("\npress 4 for  e^x    function");
	printf("\npress 5 for  square root   function");
    printf("\npress 6 for   exit   the program");
    
   	printf("\n\nenter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the angle=");
			scanf("%f",&a);
			printf("sin(%f)",sin(a));
			break;
			
		case 2:
			printf("Enter the angle=");
			scanf("%f",&a);
			printf("cosine(%f)",cos(a));
			break;
			
		case 3:
			printf("Enter the value=");
			scanf("%f",&a);
			printf("log value is %f",log(a));
			break;
			
		case 4:
			printf("Enter the value=");
			scanf("%f",&a);
			printf("exponential value",exp(a));
			break;
			
		case 5:
			printf("Enter the value=");
			scanf("%f",&a);
			printf("square root is",sqrt(a));
			break;
			
		case 6:
		default:
			printf("exit");
			
			
	}

}
while(choice!=6);
}


