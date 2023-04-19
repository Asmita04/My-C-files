/*5. Accept two numbers and print arithmetic and harmonic mean of the two numbers
 (Hint: AM= (a+b)/2 , HM = ab/(a+b) ) */


#include<stdio.h>
int main()
{
	float a,b,AM,HM;
	printf("enter two numbers=",a,b);
	scanf("%f%f",&a,&b);
	AM=(a+b)/2;
	HM=a*b/(a-b);
	printf("The arithmatic mean of two numbers=%f",AM);
	printf("\nThe Harmonic mean of two numbers=%f",HM);
	return 0;
	
}