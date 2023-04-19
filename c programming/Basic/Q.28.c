/*28. Accept two complex numbers from the user (real part, imaginary part). 
Write a menu driven program to perform the following operations till the user selects Exit. 
i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a1,i1,a2,i2,a3,i3;
	int choice;
	printf("Enter the real and imaginary part of first complex number=");
	scanf("%d%d",&a1,&i1);
	printf("Enter the real and imaginary part of second complex number=");
	scanf("%d%d",&a2,&i2);
	
	do
	{
		printf("\n press 1 for the addition of complex numbers");
		printf("\n press 2 for the substraction of complex numbers");
		printf("\n press 3 for the multiplication of complex numbers");
		printf("\n press 4 to exit the program");
		
		
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					a3=a1+a2;
					i3=i1+i2;
					printf("the addition is=%d+i(%d)",a3,i3);
					break;
			case 2:
					a3=a1-a2;
					i3=i1-i2;
					printf("the substraction is=%d+i(%d)",a3,i3);
					break;
			case 3:
					a3=a1*a2-i1*i2;
					i3=i1*a2+a1*i2;
					printf("the multiplication is=%d+i(%d)",a3,i3);
					break;
					
			case 4:
			default:
					printf("exit the program");
		}
	}

while(choice!=4);
}
