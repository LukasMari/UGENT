/* arrays3.c */

#include <stdio.h>

void kopieer(const int[], int[], int);

int main() {
	int a[] = {1,2,3,4,5};
	int b[5];
	int i;
    for (i=0 ; i<5 ; i++) 
        printf("%d   ", b[i]);
    printf("\n");
	kopieer(a,b,5); 
	for (i=0 ; i<5 ; i++) 
        printf("%d   ", b[i]);
	return 0;
}

void kopieer(const int s[], int d[], int n) {
	int i;
	for(i=0 ; i<n ; i++) {
		d[i] = s[i]; 
		// s[i] = d[i]; 
	}	   
}





