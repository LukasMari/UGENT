#include <stdio.h>

#define MAX 10

int main() {	
    int t[MAX];
	int getal, index, i;
	for (i=0 ; i<MAX ; i++) {
		printf("Geef het %de getal: ", i+1);
		scanf("%d", &getal);
		index = i-1;
		while (index>=0 && getal<t[index]) {
			t[index+1] = t[index];
			index--;
		}
		t[index+1] = getal;
	}
	      
    printf("\nDe tabel is\n");
	for (i=0 ; i<MAX ; i++) 
		printf("%d   ", t[i]);
	return 0;
}
