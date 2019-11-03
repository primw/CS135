/* Prim Wandeevong // CS 135 // Lab 7 // 3-25-19 */
#include <stdio.h>

int find_digit(int number, int digit);

int main()
{
	int input, digit, specified_digit;
	
	printf("Enter a number a desired digit location (number, digit): ");
	scanf("%d, %d", &input, &digit);
	
	while (input < 0 || digit < 0) {
		printf("Enter a number a desired digit location (number, digit): ");
		scanf("%d, %d", &input, &digit);
		}
	
	specified_digit = find_digit(input,digit);
	
	printf("The digit=%d digit of %d is: %d\n", digit, input, specified_digit);

	
	return 0;

}

int find_digit(int number, int digit)
{
	int i, specified_digit;
	
	for (i = 0; i < (digit-1) ; i++)
	{
		number /= 10;	
	}
	
	if (number == 0) {
		return -1;
		}
	
	return digit % 10;	
}
		

