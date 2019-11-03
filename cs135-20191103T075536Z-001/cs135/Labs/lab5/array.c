/* Prim Wandeevong // CS 135 // Lab 5 // 3-4-19 */
#include <stdio.h>
int main()
{
	int a[15];
	int i;
	
	printf("Enter fifteen integers: \n");
	
	/* Assigns numbers in the array */
	for (i = 0; i < 15; i++) {
		printf("Enter integer: ");
		scanf("%d", &a[i]);
	}
	
	/*Prints out even numbers */
	printf("The even indexed integers are: ");	
	for (i = 0; i < 15; i++) {
		if (i%2 == 0) {
			printf("%d,", a[i]);
		}
	}
	
	/* Prints out odd numbers */
	printf("\nThe odd indexed integers are: ");
	for (i = 0; i < 15; i++) { 
		if (i%2 != 0) {
			printf("%d,", a[i]);
		}
	}
	printf("\n");
	return 0;
	
}
	
		
