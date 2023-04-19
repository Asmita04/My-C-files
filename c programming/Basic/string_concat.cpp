#include<iostream>
using namespace std;

int main()
{
	int i;
	char string1[20],string2[20],result;
	cout<<"Enter the first string:"<<endl;
	cin.get(string1,20);
	
	cin.clear( );
	cin.ignore(20,'\n');
	
	cout<<"Enter the second string:"<<endl;
	cin.get(string2,20);
	
	cout<<"You have entered first string:"<<string1<<endl;
	cout<<"You have entered second string:"<<string2<<endl;
	
/*	while(string.size()<20);
	

	*/
	for( i=0;i<string1.size();i++)
	{
		result=result+string1[i];
			
	}
	for(i=0;i<string2.size( );i++)
		
	cout<<"The concateneted string is :"<<result;
	return 0;
}