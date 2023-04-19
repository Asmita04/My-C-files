//WAP to read x, y and z from keyboard. Write a program to print max and min number of those three.
#include<stdio.h>
int main()
{
	int X,Y,Z;
	printf("Enter any three numbers\t");
	scanf("%d%d%d",&X,&Y,&Z);
	
	if(X>Y)
	{
		if(X>Z)
		printf("%d is max number compare to %d and %d",X,Y,Z);
	}
		if(Y>Z)
	{
		if(Y>X)
		printf("%d is max number compare to %d and %d",Y,X,Z);
	}
		if(Z>Y)
	{
		if(Z>X)
		printf("%d is max number compare to %d and %d",Z,X,Y);
		
	}
	

}


