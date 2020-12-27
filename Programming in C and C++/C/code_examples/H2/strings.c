/* strings.c */

#include <stdio.h>
#include <string.h>

int main() {

	char *s1 = "string1";
	char s2[80] = "string2";
 	char s3[] = "voorbeeld";
	
	s1 = "nieuw"; 
	/* s2 = "nieuw"; */
	/* s3 = "nieuw"; */

	printf("s1 = %s  lengte = %d\n", s1, strlen(s1));
	printf("s2 = %s  lengte = %d\n", s2, strlen(s2));
	printf("s3 = %s  lengte = %d\n", s3, strlen(s3));

    s1++;
    printf("s1 = %s  lengte = %d\n", s1, strlen(s1));
    
    /* s1[1] = 'b'; */
    /* NIET DOEN: programma zal crashen */
    s2[1] = 'b';
    s3[1] = 'b';
	 
    /* scanf("%s",s1); */
    /* gets(s1); */
    /* NIET DOEN: programma zal crashen */
	
    scanf("%s",s3);
    /* gevaarlijk!!! Wat als ik meer dan 9 karakters ingeef? */
	printf("s3 = %s   lengte = %d\n", s3, strlen(s3));
		
	scanf("%9s",s3);
	printf("s3 = %s   lengte = %d\n", s3, strlen(s3));	
	
	fflush(stdin);  /* buffer leegmaken */
	gets(s3);
	/* gevaarlijk!!! Wat als ik meer dan 9 karakters ingeef? */
	printf("s3 = %s   lengte = %d\n", s3, strlen(s3));	
	fgets(s3,10,stdin);
	printf("s3 = %s   lengte = %d\n", s3, strlen(s3));	
		
	/* strcpy(s1,"nieuwe string"); */
	/* NIET DOEN: programma zal crashen */
	
	strcpy(s2,"nieuwe");
    printf("s2 = %s  lengte = %d\n", s2, strlen(s2));
	
	strcat(s2,"string");
    printf("s2 = %s  lengte = %d\n", s2, strlen(s2)); 
    
    puts(s2); 
    /* puts is een alternatief voor printf
       puts voegt op het einde een newline karakter toe 
       printf(s2);   is niet ok
       printf("%s\n", s2)  is equivalent aan puts(s2), maar is minder efficiënt
	   dus: gebruik puts indien enkel een string moet uitgeschreven worden!!!
    */
    
    strncpy(s2,"extra",4);
    puts(s2);
	return 0;
}




