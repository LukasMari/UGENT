#include <stdio.h>
#include <stdlib.h>

typedef struct knoop knoop;

struct knoop {
	int getal;
	knoop *next;   
};

knoop* maak_gesorteerde_lijst();
void voeg_getal_toe(knoop **, int);
void print_lijst(const knoop*);

int main() {
    knoop *lijst;
	printf("Geef reeks getallen in (stop met 0):\n");
	lijst = maak_gesorteerde_lijst();
	printf("Reeks getallen is:\n");
    print_lijst(lijst);
	return 0;
}

knoop* maak_gesorteerde_lijst() {
   knoop *l = 0;
   int getal;
   scanf("%d",&getal);
   while (getal != 0) {
      voeg_getal_toe(&l, getal);
      scanf("%d",&getal);
   }
   return l;
}


void voeg_getal_toe(knoop **l, int getal) {
   knoop *h, *nieuw;
   nieuw = malloc(sizeof(knoop));
   nieuw->getal = getal;
   if (*l == 0 || getal <= (*l)->getal) {    
      nieuw->next = *l;
      *l = nieuw;
   }
   else {
      h = *l;
      while (h->next != 0 && h->next->getal < getal)
         h = h->next;
      nieuw->next = h->next;
      h->next = nieuw;
   }
}

void print_lijst(const knoop *l) {
   while (l != 0) {
      printf("%d\n", l->getal);
      l = l->next;
   }
}

