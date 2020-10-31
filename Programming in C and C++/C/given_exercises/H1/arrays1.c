#include <stdio.h>

#define MAX 5

int main() {
	int i;
	
    /* array declareren en uitschrijven */
    int getallen[MAX];
    printf("Grootte array: %d\n", sizeof(getallen)/sizeof(int));    
    printf("Array gedeclareerd, maar geen waarde toegekend:\n");
    for (i=0 ; i<MAX ; i++) 
        printf("%d   ", getallen[i]);
    printf("\n");
    
    /* array opvullen */
    for (i=0 ; i<MAX ; i++) 
        getallen[i] = i;
    
    /* array uitschrijven */
    printf("Opgevulde array:\n");
    for (i=0 ; i<MAX ; i++) 
        printf("%d   ", getallen[i]);
    printf("\nBuiten tabel lezen: %d  %d %d  %d",
	               getallen[MAX],getallen[MAX+1],
				   getallen[MAX+2],getallen[MAX+3]);  
    return 0;
}
