/*#include <iostream>  
using namespace std;  
int main() {         
 int i=1;      
         while(i<=10)   
       {      
            cout<<i <<"\n";    
            i++;  
          }       
    }  */
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
int data = 3;  
cout << "Value of the data is: " << data<< endl;  
change(data);  
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  
