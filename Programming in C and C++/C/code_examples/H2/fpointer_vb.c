#include <stdio.h>
#include <math.h>

double som(double, double);
double product(double, double);
void change(double(*)(double), double *, int);

int main() {
   double a = 10, b = 5; 
   double (*t[])(double, double) = {som, product, fmin};
   double tab[] = {1.0,2.0,4.0,8.0};
   int i;
   for (i=0 ; i<3 ; i++) 
       printf("result = %.0lf\n", t[i](a,b));
   change(sqrt,tab,4); 
   for (i=0 ; i<4 ; i++) 
       printf("%.3lf\t", tab[i]);
    printf("\n"); 
   return 0;
}

double som(double x, double y) { return x + y; }
double product(double x, double y) { return x * y;}
void change(double(*fp)(double), double *t, int n) {
	int i=0;
	for (i=0 ; i<n ; i++)
	   t[i] = fp(t[i]);
}
