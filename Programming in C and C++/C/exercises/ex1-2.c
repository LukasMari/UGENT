#include <stdio.h>

void proc(int,int);

int main() {
proc(5,3);
return 0;
}

void proc(int a, int b) {
    if (a <= b) {
        printf("Stop %d %d\n", a, b);
    } else {
        proc(a-1,b);
        printf("a=%d\tb=%d\n", a, b);
        proc(a,++b);
    }
}