/* Prim Wandeevong // CS 135 // Project 4 // 2-26-19 */
#include <stdio.h>
int main()
{
	int input, a, b, result, flag = 0;
	double c, d, resultf;
	

	
	while (input != 6) {
		
		/*Main menu options */
		printf("Options:\n");
		printf("1 - addition\n");
		printf("2 - subtraction\n");
		printf("3 - multiplication\n");
		printf("4 - division\n");
		printf("5 - toggle calculator type\n");
		printf("6 - exit program\n");
		printf("Please enter your option: ");
		scanf("%d", &input);
	
	
		/* Integer mode */
		if (flag == 1) {
			switch(input) {
				case 1: printf("Enter first term: ");
					scanf("%d", &a);
					printf("Enter second term: ");
					scanf("%d", &b);
					result = a + b;
					printf("The sum is: %d\n", result);
					break;
		
				case 2: printf("Enter first term: ");
					scanf("%d", &a);
					printf("Enter second term: ");
					scanf("%d", &b);
					result = a - b;
					printf("The difference is: %d\n", result);
					break;
			
				case 3: printf("Enter first term: ");
					scanf("%d", &a);
					printf("Enter second term: ");
					scanf("%d", &b);
					result = a * b;
					printf("The product is: %d\n", result);
					break;
				
				case 4: printf("Enter first term: ");
					scanf("%d", &a);
					printf("Enter second term: ");
					scanf("%d", &b);
					result = a/b;
					if (b = 0) {
						printf("Cannot divide by zero!\n");
						}
					else {
						printf("The quotient is: %d\n", result);
						}
					break;
				
				case 5: printf("Calculator now works with doubles.\n");
					flag--;
					break;
					
				case 6: input = 6;
					break;
				
				default:printf("Invalid Option\n");
					break;
				}
			}
		
		/*Double Precision Mode */	
		else if (flag == 0){
			switch(input) {
				case 1: printf("Enter first term: ");
					scanf("%lf", &c);
					printf("Enter second term: ");
					scanf("%lf", &d);
					resultf = (c + d);
					printf("The sum is: %.15lf\n", resultf);
					break;
		
				case 2: printf("Enter first term: ");
					scanf("%lf", &c);
					printf("Enter second term: ");
					scanf("%lf", &d);
					resultf = c - d;
					printf("The difference is: %.15lf\n", resultf);
					break;
			
				case 3: printf("Enter first term: ");
					scanf("%lf", &c);
					printf("Enter second term: ");
					scanf("%lf", &d);
					resultf = c * d;
					printf("The product is: %.15lf\n", resultf);
					break;
				
				case 4: printf("Enter first term: ");
					scanf("%lf", &c);
					printf("Enter second term: ");
					scanf("%lf", &d);
					resultf = (c/d);
					if (d == 0)
						printf("Cannot divide by zero!\n");
					else 
						printf("The quotient is: %.15lf\n", resultf);
						
					break;
				
				case 5: printf("Calculator now works with integers.\n");
					flag++;
					break;
					
				case 6: input = 6;
					break;
					
				default:printf("Invalid Option\n");
					break;
				}
			}
		}
	
		
		return 0;
		
	}
					
			
