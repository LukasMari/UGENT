/*Fibonacci exercise for recursion*/
#include <stdio.h>

int fibonacci(int);

int main() {
    int i, n, t1=0, t2 = 1, next;

    printf("Enter the amount of terms to loop: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d\n", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    return 0;
}

int fibonacci(int x) {

}