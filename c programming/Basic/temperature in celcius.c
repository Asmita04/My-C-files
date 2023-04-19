//2. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15) 

#include<stdio.h>
int main()
{
	float F,C,K;
	printf("enter temperature in farenhit ");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	K=(C+273);
	printf("temperature in celcius= %f",C);
	printf("\ntemperature in kelvin is= %f",K);
	return 0;
}