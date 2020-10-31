#include <stdio.h>

void print_lijn();
void print_ascii_tabel(char,char);
int my_pow(int, int);

int main(void) {
   print_ascii_tabel('A','z');
   print_lijn();
   printf("2 tot de 6de macht = %d", my_pow(2,6));
   return 0;
}

void print_lijn() {
   int i;
   putchar('\n');
   for (i=0 ; i<80 ; i++) 
      putchar('-');
   putchar('\n');
}

void print_ascii_tabel(char s ,char e) {
   char c;
   for (c=s ; c<=e ; c++)
      printf("%c : %d\t", c, c);
}

int my_pow(int base, int n) {
   int p = 1, i;
   for (i=1 ; i<=n ; i++)
      p *= base;
   return p;
}

