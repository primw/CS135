/* Prim Wandeevong // CS 135 // Project 5 // 3-10-19 */
#include <stdio.h>
int main()
{

	int N, M;

	/* Asks for user input */
	printf("This program counts occurences of digits 0 through 9 in an NxM array.\n");
	printf("Enter the size of the array (Row Column): ");
	scanf("%d %d", &N, &M);
	
	
	/* Creates the array */
	int size[N][M];
	int check[10] = {0,0,0,0,0,0,0,0,0,0};
	
	
	/* Assigns values within the array */
	for (int a = 0; a < N; a++) {
		printf("Enter row %d: ", a);
		
		for (int b = 0; b < M; b++) {
			scanf("%d", &size[a][b]);
			
			switch (size[a][b]) {
				case 0: 
					check[0]++;
					break;
				case 1: check[1]++;
					break;
				case 2: check[2]++;
					break;
				case 3: check[3]++;
					break;
				case 4: check[4]++;
					break;
				case 5: check[5]++;
					break;
				case 6: check[6]++;
					break;
				case 7: check[7]++;
					break;
				case 8: check[8]++;
					break;
				case 9: check[9]++;
					break;
				default:
					break;
			}	
		}
	}

	
	/* Prints digit counts */
	printf("Total counts for each digit:\n");
	for (int x = 0; x < 10; x++) {
		printf("Digit %d occurs %d times\n", x, check[x]);
		}
	
		
	/* Prints 1D array */
	printf("The digit counts directly from the 1D array:\n");
	for (int x = 0; x < 10; x++) {
		printf("%d ", check[x]);
	}
	
	
	/* Prints 2D array */
	printf("\nThe original 2D array entered by the user: \n");
	for (int a = 0; a < N; a++) {
	
		if (a > 0)
			printf("\n");
			
		for (int b = 0; b < M; b++) {
			printf("%d ", size[a][b]);
		}

	}
	
	printf("\n");
	
		
	return 0;
	
}
	
	
	
	
	
		
