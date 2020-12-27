#include <stdio.h>

int * kleinste(int *,int);
const int * kleinste_met_const(const int *,int);

int main() {
    int t[] = {3, -5, 2, 0, -7, 9};
    /* let op: 
    int *t = {3, -5, 2, 0, -7, 9};
      is niet ok!! Compiler geeft warning + programma crasht!!
    */
    int n = sizeof(t)/sizeof(int);
    int *t1;
    const int *t2;
    
    t1 = kleinste(t,n);
    printf("kleinste = %d index = %ld \n",*t1,t1-t);
    (*t1)++;
    
    /* t1 = kleinste_met_const(t,n); */
    /* warning!! */
    
    t2 = kleinste(t,n);
    printf("kleinste = %d index = %ld \n",*t2,t2-t);
    /* (*t2)++; */
    /* error: increment of read-only location *t2 */
    
    t2 = kleinste_met_const(t,n);
    printf("kleinste = %d index = %ld \n",*t2,t2-t);  
    /* (*t2)++; */
    /* error: increment of read-only location *t2 */  
    
	return 0;
}

int * kleinste(int *t, int n) {
	int * kleinste = t;
	int i;
	for (i=1 ; i<n ; i++)
	   if (*kleinste > *(t+i))
	      kleinste = t+i;
	return kleinste;
}

const int * kleinste_met_const(const int *t, int n) {
	const int * kleinste = t;
	int i;
	for (i=1 ; i<n ; i++)
	   if (*kleinste > *(t+i))
	      kleinste = t+i;
	return kleinste;
}


