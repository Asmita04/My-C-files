//19. Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive) 
#include<stdio.h>
void main()
{
	int x,y,i;
	printf("enter any two integers=");
	scanf("%d%d",&x,&y);


	int sum=0;
	{
		for(i=x;i<=y;i++)
		{
			sum=sum+i;
		}
		printf("the sum of all integers between %d and %d  =%d",x,y,sum);
		
		
	
		}
		
	
}



	
	
	
		
	
	

