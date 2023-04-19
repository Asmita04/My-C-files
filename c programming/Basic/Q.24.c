//24. Write a program to accept a character, an integer n and display the next n characters.
#include<stdio.h>


	void main() 	{

    char character;
    int num;

    printf("Enter Character : ");
    scanf("%c", &character);

    printf("Enter number : ");
    scanf("%d", &num);

     for(int i = 0; i < num; i++) {
        printf(" %c ", ++character);
    } 

}