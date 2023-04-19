/*#include <stdio.h>  
int main()  
{  
    int x=9;  
    printf("\n\n value of x is : %d", x); 
    int *ptr;  
    ptr=&x;  
    *ptr=8;  
    printf("\n\n value of x is : %d", x);  
    return 0;
}  */

#include <stdio.h>  
int main()  
{  
    int x=4;  
    int y;  
    int *ptr;  
    ptr=&x;       //address of x 
    y=*ptr;  	//value of y  .. y stores the value of x
    printf("\nThe value of ptr is : %d",*ptr); 
    printf("\nThe value of x is : %d",x);  
    printf("\n The value of y is : %d",y); 
    *ptr=5;  
    printf("\nThe value of x is : %d",x);  
    printf("\n The value of y is : %d",y);  
    return 0;  
}	 
