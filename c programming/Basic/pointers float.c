#include<stdlib.h>
int main() 
{
   int a = 7;
   float b = 7.6;
   void *p;
   p = &a;
   printf("\n\nInteger variable is = %d", *( (int*) p) );
   p = &b;
   printf("\n\nFloat variable is = %f", *( (float*) p) );
   return 0;
}
