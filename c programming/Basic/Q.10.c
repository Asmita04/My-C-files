/*10. Write a program to accept three numbers and check whether the first is between the other two numbers.
Ex: Input 20 10 30. Output: 20 is between 10 and 30 */
#include<stdio.h>
int main()
{
		float a1,a2,a3;
		printf("enter the three numbers:");
		scanf("%f%f%f",&a1,&a2,&a3);
		if(a1>a2&&a1<a3)
		{
			printf("\n the number %f is in between other two %f and %f ",a2,a1,a3);
		}
		else
		if(a1<a2&&a1>a3)
		{
			printf("n the number %f is not in between other two %f and %f",a2,a1,a3);
		}
					
}
	