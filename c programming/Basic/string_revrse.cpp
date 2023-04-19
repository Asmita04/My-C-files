//WAP to reverse string .
#include<iostream>
#include<cstring>
using namespace std;
	int length,i,temp;
void stringrev(char string1[20])
{
	length=strlen(string1);
  for(i=0;i<length/2;i++)
  {
  	temp=string1[i];
 	string1[i]=string1[length-1-i];
  	string1[length-1-i]=temp;
  	
  }
}

int main()
{
		//cout<<"Enter the size :"<<size<<endl;
	
	char string1[20],temp;
	cout<<"Enter the string1:"<<endl;
	cin.getline(string1,20);
	
	cin.clear();
	cin.ignore(20,'\n');
	cout<<"You have entered:"<<string1<<endl;
	
		
	for(int i=0;string1[i]!='\0';i++)
	{
		length++;
	}
	
//	cout<<"Hence the lenght of the string is:"<<length;
	
	//l=strlen(string1);
  /*for(i=0;i<l/2;i++)
  {
  	temp=string1[i];
  	string1[i]=string1[l-1-i];
  	string1[l-1-i]=temp;
  	
  }*/
	
	stringrev( string1);
	cout<<"reversed string is:"<<string1;
	
	}