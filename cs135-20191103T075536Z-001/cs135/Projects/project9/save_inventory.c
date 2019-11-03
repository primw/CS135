/* Prim Wandeevong // CS 135 // Project 9 // 5-4-19 */
#include <stdio.h>
int main()
{
	int part, quantity;
	float price;
	FILE *fp;
	
	fp = fopen("inventory.txt","w");
	
	printf("This program stores a business inventory.\n");
	
	while(part != 0)
	{
		printf("Please enter item data (part number, quantity, price): ");
		scanf("%d, %d, %f", &part, &quantity, &price);
		
		if(part != 0)
		{
		fprintf(fp, "%d, %d, %f\n", part, quantity, price);
		}
	}
	
	return 0;
}
