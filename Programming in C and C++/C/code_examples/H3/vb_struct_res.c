#include <stdio.h>
#include <stdlib.h>

typedef struct {
   double x,y;
} punt;

punt lees_punt1();
void lees_punt2(punt *);
punt* lees_punt3();
/* opmerking: function overloading is NIET toegestaan in C */
void schrijf_punt(const punt*);

int main() {
    punt p1;
    punt *p2, *p3;
    
    p1 = lees_punt1();
    schrijf_punt(&p1);
    
    lees_punt2(&p1);
    schrijf_punt(&p1);
    
    p2 = malloc(sizeof(punt)); 
    lees_punt2(p2);
    schrijf_punt(p2);
    free(p2);
    
    p3 = lees_punt3();
    schrijf_punt(p3);
    free(p3);
    
    return 0;
}

punt lees_punt1() {
   punt p;
   printf("x-coordinaat: ");
   scanf("%lf",&p.x);
   printf("y-coordinaat: ");
   scanf("%lf",&p.y);
   return p;  
}

void lees_punt2(punt *p) {
   printf("x-coordinaat: ");
   scanf("%lf",&p->x);
   printf("y-coordinaat: ");
   scanf("%lf",&p->y);	
}

punt* lees_punt3() {
   punt *p = malloc(sizeof(punt));
   printf("x-coordinaat: ");
   scanf("%lf",&p->x);
   printf("y-coordinaat: ");
   scanf("%lf",&p->y);
   return p;	
}

void schrijf_punt(const punt *p) {
   printf("punt = {%.2lf,%.2lf}\n", (*p).x, p->y);
}


