#include<stdio.h>

#define MAXSCORE 20

int main() {
   int score, i;
   
   /* frequentietabel declareren en initialiseren */
   int freqtabel[MAXSCORE + 1] = {0};

   /* scores inlezen en aanduiden in de freqentietabel */
   while (scanf("%d",&score)) 
   	  freqtabel[score]++;

   /* overzicht van de scores weergeven */
   for (i = 0; i <= MAXSCORE; i++) 
      printf("Score %d: %d keer.\n",i,freqtabel[i]);
}
