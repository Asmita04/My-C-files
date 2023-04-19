#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num==1||num==0)
	{
		return 1;
		
	}
return factorial(num-1)*num;

}
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	
	cout<<"The factorial of given number is" <<" "<< factorial(num);
}