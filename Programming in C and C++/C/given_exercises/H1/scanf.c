/* scanf.c */

#include <stdio.h>

int main() {
   int x; 
   double sum = 0, v;
   char ch;
   
   printf("Enter an integer: ");
   if (scanf("%d", &x) == 0) 
      printf("Error: not an integer\n");
   else 
      printf("Read in %d\n", x);
   /* vergeet & niet bij inlezen!!! */
    
   while (scanf("%lf", &v))
      printf("\t%.2f\n", sum += v);
   return 0;
   /* lf vervangen door f => niet ok!! */
   

   /* 
   Wat gebeurt er als er bij het inlezen van een int 
   5.3 of abc ingegeven wordt?
   Hoe kunnen we dit ongewenste effect vermijden?
   */

}

