#include <stdio.h>

void bepaal_tegengestelde(int);

int main() {
	int i = -5; 
	bepaal_tegengestelde(i);
	printf("i = %d\n", i);
	return 0;
}

void bepaal_tegengestelde(int i) {
	i *= -1;
	printf("i = %d\n", i);
}

