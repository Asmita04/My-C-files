#include<iostream>
#include<iomanip>
int main()
{
	int n =12;
	std::cin>>std::hex>>n;
	std ::cout<<std::setprecision(2)<<n;
	return 0;
}