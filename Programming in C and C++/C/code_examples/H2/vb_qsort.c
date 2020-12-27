#include <stdio.h>
#include <stdlib.h>

int cmpint1(const void * a, const void * b) {
   return ( *(const int*)a - *(const int*)b );
}

int cmpint2(const int * a, const int * b) {
   return ( *a - *b );
}

int main() {
   int t1[] = { 88, 56, 100, 2, 25 };
   int t2[] = { 88, 56, 100, 2, 25 };
   int i;

   printf("Before sorting the list is: \n");
   for( i = 0 ; i < 5; i++ ) {
      printf("%d ", t1[i]);
   }

   qsort(t1, sizeof(t1)/sizeof(t1[0]), sizeof(t1[0]), cmpint1);

   printf("\nAfter sorting the list is: \n");
   for( i = 0 ; i < 5; i++ ) {   
      printf("%d ", t1[i]);
   }
   
   printf("\nAfter sorting the list is: \n");
   qsort(t2, sizeof(t2)/sizeof(t2[0]), sizeof(t2[0]),
      (int(*)(const void *, const void *))cmpint2);
   /* casten zodat we geen warning krijgen */
   for( i = 0 ; i < 5; i++ ) {   
      printf("%d ", t2[i]);
   }
   printf("\n");
   return 0;
}
