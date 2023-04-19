//Binary to octal
#include <stdio.h>
 
int main()
{
    long int binarynum, octalnum = 0, base = 1, remainder ,decimal=0;
 
    printf("Enter the value for  binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        binarynum = binarynum / 10;
    }
    printf("decimal:%d",decimal);
  //  printf("Equivalent octal value: %lo", octalnum);   
   
    base = 1;
    while(decimal != 0) 
    {
    	remainder =decimal %8;
        octalnum = octalnum + remainder * base;
        decimal = decimal / 8;
        base = base * 10;
    }
    printf("\n Octal value is :%d",octalnum);
}