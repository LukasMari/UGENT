/* argc_argv.c */

#include <stdio.h>

int main(int argc, char** argv) {
	int i;
   	if (argc == 1)
   	   printf("geen extra strings meegegeven");
    else {
    	for (i=1 ; i<argc ; i++)
    	   printf("Hallo %s\n", argv[i]);
    }
	return 0;
}




