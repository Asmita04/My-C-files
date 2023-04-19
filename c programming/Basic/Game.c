           //Guess the number...........
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number ,guess,nguesses=1;
	srand(time(0));
	number=rand()%100+1;             //generates random number between 1 to 100.
//	printf("Enter the number : ");
//	scanf("%d",&number);
	
	do{
		printf("Enter the guess=");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("Lower number please!");
		}
		else if(guess<number)
		{
			printf("Higher number please!");
		}
		else{
			printf("You guessed it in %d ways",nguesses);
		}
		nguesses++;
		
	}
	while(guess!=number);
	return 0;
}
