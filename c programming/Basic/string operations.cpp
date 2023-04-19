#include<iostream>
using namespace std;
//int i=0;

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
		int choice,length;
	char string1[20],string2[20];
    char temp;
	cout<<"Enter the string1:";
	cin.getline(string1,20);
	
	cout<<"Enter the string2:";
	cin.getline(string2,20);
	
	cout<<"press1 for string comapre"<<endl;
	cout<<"press2 for string length"<<endl;
	cout<<"press3 for string reverse"<<endl;
	cout<<"press4 for string concatenation"<<endl;
	cout<<"press5 for  copying one string into another"<<endl;
	cout<<"press6  for exit the program"<<endl;
	
	
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
				{
		 				stringcmp(string1,string2);
		 				break;
  					
				}
				
			case 2:
					{
							for(int i=0;string1[i]!='\0';i++)
								{
									length++;
								}
									cout<<"Hence the lenght of the string is:"<<length;
								break;		
					}
			case 3:
				{
						for(int i=0;string1[i]!='\0';i++)
								{
									length++;
								}
									cout<<"Hence the lenght of the string is:"<<length;
									 for(int i=0;i<length/2;i++)
					  {
					 	temp=string1[i];
						string1[i]=string1[length-1-i];
						string1[length-1-i]=temp;
						 }
						 
						 cout<<"reversed string is:"<<string1;
						 break;
					
				}
	}
	
	
}