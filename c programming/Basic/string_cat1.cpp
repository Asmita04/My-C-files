#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	
    	cout<<"Enter the first string:"<<endl;
    	cin>>str1;
    	
    	cout<<"Enter the second string:"<<endl;
    	cin>>str2;
    	
    		cout<<"You have entered first string:"<<str1<<endl;
       		cout<<"You have entered second string:"<<str2<<endl;
       	string	result=str1+str2;
	
	cout<<"The concatened string is:"<<result;
	return 0;
	}