/*30. Write a function, which accepts a character and integer n as parameter and displays the next n characters. */  

#include<stdio.h>

void printCharacters(char character, int num) {
    
    printf("Character is : \n", character);
    printf("Next %d characters are : ", num);
    for(int i = 0; i < num; i++) {
        printf("%c ", ++character);
    }
}

void main() {

    char character;
    int number;

    printf("Enter Character : ");
    scanf("%c", &character);

    printf("Enter number : ");
    scanf("%d", &number);

    printCharacters(character, number);  
}