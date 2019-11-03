/* Prim Wandeevong // CS 135 // Project 3 // 2-17-19 */
#include <stdio.h>
#include <math.h>
int main()
{
	double old_guess = 100, new_guess = 1.0, n;
	int count = 0;
	
	printf("Enter a number: ");
	scanf("%lf", &n);
	
	while (((old_guess*old_guess) - n) > .000001){
		printf("%d\t%.5lf\n", count, new_guess);
		new_guess = ((old_guess + (n / old_guess)) / 2.0);
		old_guess = new_guess;
		count++;
		}
	printf("Estimated square root of %.5lf: %.5lf\n", n, new_guess);	
			
	return 0;
	
}
			
		
	
