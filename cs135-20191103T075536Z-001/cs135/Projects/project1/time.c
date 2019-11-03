#include <stdio.h>
int main()
{

	/* Declare variables */
	int h1, m1, s1;
	int h2, m2, s2;
	int h3, m3, s3;
	int h4, m4, s4;


	/* User input */
	printf("Enter time 1 (h:m:s):");
	scanf("%d:%d:%d", &h1, &m1, &s1);

	printf("Enter time 2 (h:m:s):");
	scanf("%d:%d:%d", &h2, &m2, &s2);

	printf("Enter time 3 (h:m:s):");
	scanf("%d:%d:%d", &h3, &m3, &s3);   
	
	printf("Enter time 4 (h:m:s):");
	scanf("%d:%d:%d", &h4, &m4, &s4); 


	/* Displays output */
	printf("Hours\tMinutes\tSeconds\n");
	printf("%-5d\t%4d\t%7d\n", h1, m1, s1);
	printf("%-5d\t%4d\t%7d\n", h2, m2, s2);
	printf("%-5d\t%4d\t%7d\n", h3, m3, s3);
	printf("%-5d\t%4d\t%7d\n", h4, m4, s4);

return 0;

}











	
