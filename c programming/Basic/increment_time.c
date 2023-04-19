/*write a function which takes hours hours,minutes and seconds as parameters and an 
integercS and increments the time by S seconds Accepts time and seconds in main and displays  the new time in main using above function.*/
#include<stdio.h>
void increment(int hour,int min,int sec,int T)
{
	int e_min,e_hr,added_sec,added_min;
	
	added_sec=sec+T;
	
	e_min=added_sec/60;
	sec=added_sec%60;
	
	added_min=e_min+min;
	min=added_min%60;
	
	e_hr=added_min/60;
	hour=e_hr+hour;
	
	printf("%d:%d:%d",hour,min,sec);
}
void main()
{
	int hour,min,sec,T;
	printf("enter the time in hour min sec");
	scanf("%d%d%d",&hour,&min,&sec);
	
	printf("enter the increment in time in seconds");
	scanf("%d",&T);
	
	increment(hour,min,sec,T);
}
		
