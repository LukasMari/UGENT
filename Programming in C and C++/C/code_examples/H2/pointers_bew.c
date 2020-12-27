/* pointers_bew.c */

#include <stdio.h>

int main() {
	int i;
	int t[] = {10,20,30,40,50,60,70,80,90};
	int *p, *q;
	void *v;
	
	p = t+3;
    printf("*p = %d\n", *p);
		
	q = p-2;
    printf("*q = %d\n", *q);
    printf("q - p = %ld\n", q-p);
    printf("p = %p    q = %p\n", p, q);
     
    /* t = p+2; */
    /* Error: t is arraypointer (= constante pointer)! */
    
    p++;
    printf("*p = %d\n", *p);
    q--;
    printf("*q = %d\n", *q);
    
    printf("*p++ = %d\n", *p++); 
    printf("*p = %d\n", *p);
	printf("(*p)++= %d\n", (*p)++);
	printf("*p = %d\n", *p); 
	printf("*p+1 = %d\n",*p+1);
	printf("*(p+1) = %d\n",*(p+1));  
 
    v = t;
    /* v++; */
    /* warning: wrong type argument to increment */
    
	return 0;
}


