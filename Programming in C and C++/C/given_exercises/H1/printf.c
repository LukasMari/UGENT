/* printf.c */

#include <stdio.h>

int main() {
  double g1 = 8.7468; 
  int g2 = 456; 
  char c = '9';

  printf("grootte double = %d bytes\n", sizeof(double));
  printf("g1 = %.3f of %e\n", g1, g1);
  printf("g1 = Rounded: %.0lf  Truncated: %d\n", g1, (int)g1 );
  printf("g2 = %d of %o of %x\n", g2, g2, g2);
  printf("ASCII-code van %c = %d\n", c, c);
  printf("Opvolger van %c = %c\n", c, c+1);
  printf(":%15.10s:\n","Hello, world!");
  printf(":%-15.10s:\n","Hello, world!");
 
  return 0;
}

