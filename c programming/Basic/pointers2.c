#include <stdio.h>
int main () 
{
   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("\nAddress of var variable: %d\n", &var  );

   /* address stored in pointer variable */
   printf("\nAddress stored in ip variable: %d\n", ip );
 
   printf("\nAddress of *ip variable: %d\n", &ip );

   /* access the value using the pointer */
   printf("\nValue of *ip variable: %d\n", *ip );

 printf("\n var value : %d\n", var  );
   return 0;
}
