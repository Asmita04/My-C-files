/*29.  Write a function isEven, which accepts an integer as parameter and
 returns 1 if the number is even, and 0 otherwise. Use this function in main to accept n numbers and 
 check if they are even or odd.  */
#include<stdio.h>

int isEven(int num)
{
 		if(num%2==0)
			 {
	 			return 1;
			 }
		 else
			 {
				 return 0;
 				}
}
int main()
{
 int i,n;
 printf("\n Enter the number of integers you are going to check: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 	{
 		int num,a;
		 printf("\n\n\n Enter the number %d : ",i );
 	 	scanf("%d",&num);
	 	a = isEven(num);
	 	printf("\n Given number is %d and result is %d",num,a);
 			if(a)
 				{
 					printf("\n Given integer %d is EVEN",num);
				 }
			 else
				 {
					 printf("\n Given integer %d is ODD",num);
 				}

	}
return 0;
}