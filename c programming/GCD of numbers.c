//Euclidean Algorithm
//b=aq+r;
#include<stdio.h>
int main()
{
	int b=0;
	int a=0;
	int r,q;
	printf("Enter b:");
	scanf("%d",&b);
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf(" calculating GCD(%d,%d):",b,a);

	printf("\n\nsteps:\n");
	r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
	//step1-----------------------------------------------------------
	if(a%b==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
	}
	r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
	
	
	//step2-------------------------------------------------------------
	if(a%b==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
	r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
	}
	
	
	
	//step3------------------------------------------------------------

	
	if(a%b==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
		r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
		
	}
	
	
	//step 4--------------------------------------------------------------------------
	if(a%b==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
			r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
	}
	

	
	//step 5------------------------------------------------------------------------
	if(a%b==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
			r=b%a;
	q= b/a;
	b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);
	}
	

	
	//step 6---------------------------------------------------------------------------------
	if(r==0)
	{
		printf("\nGCD:%d",a);
	}
	else
	{
		b=a;
		a=r;
		printf("\nupdating");
		r=b%a;
		q= b/a;
		b=a*q+r;
	
	printf(" %d=%d*%d+%d",b,a,q,r);	

	}


	
	
}