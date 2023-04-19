//Array of pointers
#include<stdio.h>
int main()
{
	char *a[ ]={
				"switch",
				"up",
				"your",
				"Routine"
				};
	
	printf("string1= %s\n",*a+1);
	
	printf("string2= %s \n",*(a+1));
	
	printf("string 3= %s \n",*a+2);
	
	printf("string 4 = %s \n", (*(a+3)+2));
}