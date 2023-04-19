#include<stdio.h>
int main()
{
	int x=12;
	int y=13;
	int z=x++ + ++y;
	y=z++ + ++x + y++;
	printf("%d\t%d\t%d",&x,&y,&z);
}