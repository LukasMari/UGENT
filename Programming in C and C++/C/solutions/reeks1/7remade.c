#include <stdio.h>
#include <math.h>
/*********************************** versie 1 *********************/
int main(){
    double x = 0.23; 
    double term = x;
    double som;
    int n = 2 * 10;
    int i;
    som = x;
    for(i=2 ; i<n ; i += 2){
        term *= -x*x / (i*(i+1));
        printf("%f\n", term);
        som += term;
    }
    printf("sin(%.2f) =  %.16f \n",x,som);
    printf("controle     %.16f \n",sin(x));
    return 0;    
}