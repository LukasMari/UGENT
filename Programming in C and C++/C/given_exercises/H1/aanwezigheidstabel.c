#include<stdio.h>
#include<stdbool.h>

#define MAXSCORE 20

int main() {
   int score, i;
   
   /* aanwezigheidstabel declareren en initialiseren */
   bool aanwtabel[MAXSCORE + 1] = {false};

   /* scores inlezen en aanduiden in de aanwezigheidstabel */
   while (scanf("%d",&score)) 
   	  aanwtabel[score] = true;

   /* overzicht van de scores weergeven */
   printf("Volgende scores komen niet voor:\n");
   for (i = 0; i <= MAXSCORE; i++) 
      if (!aanwtabel[i])
         printf("%d ",i);
}
