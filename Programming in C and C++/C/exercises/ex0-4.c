#include <stdio.h>

const double PI = 3.1416;

void endOfProgram();

int main() {
    double pi_2 = PI * PI;
    printf("Pi Square = %lf\n", pi_2);
    endOfProgram();
    
    return 0;
}

void endOfProgram() {
    printf("End of program statement... \n");
}