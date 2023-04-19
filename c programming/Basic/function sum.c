void main(int a,int b) //function defination
{
	int r;
	r=a+b;
	printf("addition is=%d",r);
}
int main()
{
	int a,b;
	printf("enter thee numbers to be added");
	scanf("%d%d",&a,&b);
	add(a,b);               //call of the function
	return 0;
}
