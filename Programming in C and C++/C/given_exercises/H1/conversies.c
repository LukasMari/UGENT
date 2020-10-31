/* 
 * conversies.c
 */

#include <stdio.h>  

int main() {	   
   int i;
   double d1, d2;  
 
   i = 2.7;
   printf("i = %d\n",i);

   d1 = i / 3;
   d2 = (double) i / 3;
   printf("%f %f\n",d1,d2);
   
   return 0;
}

