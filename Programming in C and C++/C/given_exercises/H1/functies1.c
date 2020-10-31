#include <stdio.h>

const double PI = 3.1416; 

void einde(); 

int main() {
  double pi_2 = PI*PI;
  printf("Het kwadraat van pi is %lf\n", pi_2);
  einde();
  return 0;
}

void einde() {
  printf("Einde programma ...\n");
}

