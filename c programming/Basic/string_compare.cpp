//WAP to compare two strings
#include<iostream>
#include<string>
using namespace std;

void stringcmp(char string1[20],char string2[20])
 {
 	for(int i=0;string1[i]!='\0';i++)
 	 {
  		  if(string1[i]==string2[i])
		 {
			cout<<"strings are  equal"<<endl;
			break;
		}
		else
			cout<<"Strings are not equal"<<endl;
			break;
	}
  
 
}
int main()
{
  char	string1[20],string2[20];
  
  cout<<"Enter first string:";
  cin.getline(string1,20);
  
  cout<<"Enter second string:";
  cin.getline(string2,20);
  cout<<"String comparison is:";
 stringcmp(string1,string2);
 
return 0;
}