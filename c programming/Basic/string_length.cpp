//WAP to find length of string
#include<iostream>
using namespace std;
int main()
{
	char string1[20];
	int length=0;
	cout<<"Enter the string:";
	cin.getline(string1,20);
	
	for(int i=0;string1[i]!='\0';i++)
	{
		length++;
	}
	
	cout<<"Hence the lenght of the string is:"<<length;
	
	
}