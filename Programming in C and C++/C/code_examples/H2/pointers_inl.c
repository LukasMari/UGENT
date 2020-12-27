/* pointers_inl.c */

#include <stdio.h>

int main() {
	int g = 5;
	int *pg = &g; 
	int* q, n; /* LET OP: q pointer naar int, n int!! */
	/* BETER: declareer pointers apart!! */
	double *pd;
	void *v;

    /* *pd = 3.2;  */ /* NEEN!! pd bevat nog geen adres! CRASH!! */
    
	printf("*pg = %d   pg = %p   &pg = %p\n", *pg, pg, &pg);
	printf("g = %d   &g = %p\n", g, &g);
	*pg = 7;
	printf("*pg = %d   pg = %p   &pg = %p\n", *pg, pg, &pg);
	(*pg)++;
	printf("*pg = %d   pg = %p   &pg = %p\n", *pg, pg, &pg);
	*pg *= 2;
	printf("*pg = %d   pg = %p   &pg = %p\n", *pg, pg, &pg);
	
    q = &n;
	*q = *pg;
	printf("n = %d   *q = %d   q = %p   &q = %p\n", n, *q, q, &q);
	q = pg;
	printf("*q = %d   q = %p   &q = %p\n", *q, q, &q);	
	
	/* nullpointer*/
	q = 0;
	printf("q = %p   &q = %p\n", q, &q);
	/* LET OP: bij uitschrijven van *q crasht het programma!! */
	
	n = 33;
	/* pd = &n; */
	/* NOK: pointer naar double kan niet wijzen naar int */
	v = &n;
	printf("v = %p   &v = %p\n", v, &v);
	/* MERK OP: *v kan niet gebruikt/uitgeschreven worden!! */
	printf("%d\n",*(int *)v);	
	pd = v;	
	printf("*pd = %f   pd = %p   &pd = %p\n", *pd, pd, &pd);
    /* LET OP: in bovenstaande opdracht %d vervangen door %f 
               geeft een foutieve output (0.00 i.p.v. 33) */
	return 0;
}
