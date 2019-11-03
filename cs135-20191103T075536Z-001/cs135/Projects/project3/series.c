/* Prim Wandeevong // CS 135 // Project 3 // 2-17-19 */
#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, sum;
	
	sum = 0;
	
	printf("Enter an integer number: ");
	scanf("%d", &n);
	
	for (i = 1; i<= n; n--)
		sum += pow(-1,n+1) * pow(n,2);
		
	printf("The value of the series is: %d\n",sum);
	
	return 0;
	
}
		
	
		
