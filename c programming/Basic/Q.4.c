#include<stdio.h>
int main()
{
	float u,a,t,v,s;
	printf(" enter inital velocity= ",u);
	scanf("%f",&u);
	printf("enter acceleration=",a);
	scanf("%f",&a);
	printf("enter time=",t);
	scanf("%f",&t);
	v=(u+a*t);
	s=(u*t+a*t*t/2);
	printf("final velocity=%f",v);
	printf("\ndistance travelled=%f",s);
	return 0;
}
