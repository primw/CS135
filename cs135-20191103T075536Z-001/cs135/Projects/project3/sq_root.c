/* Prim Wandeevong // CS 135 // Project 3 // 2-17-19 */
#include <stdio.h>
#include <math.h>
int main()
{
	/* Declare variables */
	double old_guess = 100000000, new_guess = 1.0, n;
	
	/* User input */
	printf("Enter a number: ");
	scanf("%lf", &n);

	
	/* Until sq root of guess is close to actual sq root, keep guessing smaller */
	while (((old_guess*old_guess) - n) > .000001){
		printf("%.5lf\n", new_guess);
		new_guess = ((old_guess + (n / old_guess)) / 2.0);
		old_guess = new_guess;
		}
		
	/* Print out estimated sq root */
	printf("Estimated square root of %.5lf: %.5lf\n", n, new_guess);	
			
	return 0;
	
}
			
		
	
