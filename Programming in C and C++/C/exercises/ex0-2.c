#include <stdio.h>

int main () {
    int x;
    double sum = 0, v;

    printf("Enter your integer: ");
    
    if (scanf("%d", &x) == 0) {
        printf("Erorr: you did not enter an integer: %d \n", x);
    } else {
        printf("Read in %d\n", x);
    }

    while (scanf("%lf", &v)) {
        printf("\t%.2f\n", sum += v);
    }
    
    return 0;
}