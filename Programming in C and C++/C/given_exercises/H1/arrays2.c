/* arrays2.c */

#include <stdio.h>

void verdubbel(int[], int); 

int main() {
	int i, n;
	int t[] = {1,2,3,4,5};
	n = sizeof(t)/sizeof(t[0]);
	verdubbel(t,n);
	for (i=0 ; i<n ; i++)
	   printf("%d  ",t[i]);
	return 0;
}

void verdubbel(int t[], int n) {
	int i;
	for(i=0 ; i<n ; i++) 
	   t[i] *= 2;
}

