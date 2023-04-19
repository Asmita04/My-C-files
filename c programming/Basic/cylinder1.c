//1. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr 2 + 2prh, volume = pr 2 h) 

#include<stdio.h>
void cylinder()
{
	float r,h;
	float area ,volume;
	printf("enter the values of r and h:\n");
	scanf("%f%f",&r,&h);
	area =(2*3.14*r)*(r+h);
	volume=(3.14*r*r*h);
	printf("surface area of cylinder=%f", area);
	printf("\nvolume=%f",volume);
	
	}
	