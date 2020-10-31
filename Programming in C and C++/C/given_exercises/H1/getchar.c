#include <stdio.h>
#include <ctype.h>
/* om te kunnen gebruik maken van de functie toupper */

int main() { 
   char c;
   while ((c = getchar()) != EOF) {
      putchar(toupper(c)); 
   }
      
   
/* oefening: 
   herschrijf dit programma zonder gebruik te maken
   van de functie toupper uit ctype.h
*/
   return 0;
}

