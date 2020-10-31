#include<stdio.h>
#include<stdbool.h>

#define MAXSCORE 20

int main() {
   int score, i;
   int x;
   /* aanwezigheidstabel declareren en initialiseren */
   bool aanwtabel[MAXSCORE + 1] = {false};
   for(x = 0; x<= MAXSCORE; x++) {
      printf("%d ", x);
   }
   /* scores inlezen en aanduiden in de aanwezigheidstabel */
   printf("Read in the next scores: ");
   while (scanf("%d",&score)) {
      aanwtabel[score] = true;
      if(score == 0){ 
         break;
      }
   }
   	  

   /* overzicht van de scores weergeven */
   printf("Volgende scores komen niet voor:\n");
   for (i = 0; i <= MAXSCORE; i++) 
      if (!aanwtabel[i])
         printf("%d ",i);
}
