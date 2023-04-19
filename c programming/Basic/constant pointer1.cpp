#include<iostream>
using namespace std;
int main()
{
	 const int  a=10;
 const	int b=20;
const int* p;
	p=&a;
	p=&b;
	
	cout<<"Address  of a="<< p<<endl;
	cout<<"Address of b="<<p<<endl;
}