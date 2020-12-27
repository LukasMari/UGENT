#include <stdio.h>
#define AANTAL 4

int main() {
   int a = 6, i;
   
   int *b = &a;
   int **c = &b;
   printf("*b=%d   **c=%d\n",*b,**c);
  
   int nummers[] = {0, 10, 20, 30};
   char tekens[] = {'a','b','c','d'};

   int (*ptr_nummers)[] = &nummers;
   for(i=0; i<AANTAL; i++) { 
      printf("%d ",(*ptr_nummers)[i]);	
      /* let op: *ptr_nummers[i] is fout! Waarom? */
   }
   	
   int* ptrs_nr_int[AANTAL];
   char* ptrs_nr_char[AANTAL]; 
   for(i=0; i<AANTAL; i++){
        ptrs_nr_int[i]    = &nummers[i];
        ptrs_nr_char[i]   = &tekens[i];
   }  
   printf("\n \n");
   for(i=0; i<AANTAL; i++) { 
      printf("%4d %6p %6p \n",
	     *ptrs_nr_int[i], ptrs_nr_int[i], &ptrs_nr_int[i]);	
   }
   printf("\n");
   for(i=0; i<AANTAL; i++) {
      printf("%4c %10p %10p \n",  
	      *ptrs_nr_char[i], ptrs_nr_char[i],  &ptrs_nr_char[i]);
   } 
   return 0;
}

