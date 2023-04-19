#include<stdio.h>
int main()
{
	int a,b,c,add,sub;
	printf("\n\n enter the two numbers to add ");
	scanf("%d%d",&a,&b);
    add=(a+b);
	sub=(a-b);
	printf("\n\n addition is=%d",add);
	printf("\n\n substraction is=%d",sub);
}
int add(int a,int b)
{
	int r;
	r=a+b;
	return r;

int sub(int a,int b);

	int s;
	s=a-b;
	return s;

}