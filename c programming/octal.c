#include<stdio.h>
#include<math.h>

int main()
{
    int i, octal = 0, decimal = 0;
    long binary;

    printf("Enter the Binary Number = ");
    scanf("%ld", &binary);
    
    i = 0;
    while(binary != 0)
    {
        decimal = decimal + (binary % 10) * pow(2, i);
        i++;
        binary = binary/10;
    }
    printf("Decimal value:%d",decimal);

    i = 1;
    while(decimal != 0) 
    {
        octal = octal + (decimal % 8) * i;
        decimal = decimal / 8;
        i = i * 10;
    }
    printf("\n The octal Value = %d\n", octal);
}