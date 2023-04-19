//WAP to print the address of a variable .use this address to get the value of this varible
#include<stdio.h>
int main()
{
	int a=20,*ptr;
	ptr=&a;
	printf("The address of a varible %d",&a);
	printf("\n The value of that varible is %d",*ptr);

}