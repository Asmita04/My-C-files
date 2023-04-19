/*16. Accept the time as hour, minute and seconds and check whether the time is valid. 
(Hint: 0<=hour<24 0<=minute<60 0<=second <60*/
#include<stdio.h>
int main()
{
	int hour,minute,seconds;
	printf("Enter the time in hour ,minute and seconds");
	scanf("%d%d%d",&hour,&minute,&seconds);
	if((0<=hour&&hour<24)&&(0<=minute&&minute<60)&&(0<=seconds&&seconds <60))
	{
		printf("the time is valid");
	}
	else
	{
		printf("time is not valid");
	}
	return 0;
}
