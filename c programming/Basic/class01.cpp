#include <iostream>  
using namespace std;  
class Student {  
   private:  
      int id;//data member (also instance variable)      
      string name;//data member(also instance variable)  
	public:
		void display()
		{
				id = 20;
				cout<<id;
			}    
};  
int main() {  
    Student s1; //creating an object of Student   
   // s1.id = 201;    
   // s1.name = "XYZ";  
   s1.display(); 
   // cout<<s1.id<<endl;  
    //cout<<s1.name<<endl;  
    return 0;  
}