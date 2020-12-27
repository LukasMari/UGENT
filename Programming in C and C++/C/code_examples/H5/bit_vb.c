#include <stdio.h>

int main() {
   int a = 12345, b = 67890;
   int c = ~a; int d = a&b;
   int e = a|b; int f = a^b;
   int i;
   printf("%d   %d   %d\n", a, b, c);
   printf("%d   %d   %d\n", d, e, f); 
   a = 3;
   for(i=0 ; i<5 ;i++) {
   	 a<<=i;
   	 printf("%d\n",a);
   }
   a = -3;
   for(i=0 ; i<5 ;i++) {
   	 a<<=i;
   	 printf("%d\n",a);
   }
   a = 3072;
   for(i=0 ; i<5 ;i++) {
   	 a>>=i;
   	 printf("%d\n",a);
   }
   a = -3072;
   for(i=0 ; i<5 ;i++) {
   	 a>>=i;
   	 printf("%d\n",a);
   }
   return 0;
}



