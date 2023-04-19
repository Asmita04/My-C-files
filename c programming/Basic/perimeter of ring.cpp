#include<stdio.h>
int main()
{
	float a,b,perimeter,area;
	printf(" enter inner radius=",a);
	scanf("%f",&a);
	printf("enter outer radius=",b);
	scanf("%f",&b);
	perimeter=(2*22/7*(a+b));
	area=(22/7*(a*a-b*b));
	printf("The perimeter of the ring=%f",perimeter);
	printf("\nThe area of the ring=%f",area);
	return 0;
	
	
}