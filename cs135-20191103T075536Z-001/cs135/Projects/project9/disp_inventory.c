/* Prim Wandeevong // CS 135 // Project 9 // 5-6-19 */
#include <stdio.h>
int main()
{
	int part, quantity;
	float price;
	FILE *fp;
	fp = fopen("inventory.txt", "r");
	
	printf("Below, are the items in your inventory.\n");
	printf("Part#\tQuantity\tItem Price\n");
	
	for(int i = 0; i < 2; i++)
	{
		fscanf(fp,"%d, %d, %f", &part, &quantity, &price); 
		printf("%5d\t%8d\t%9.2f\n", part, quantity, price);
	}
	
	fclose(fp);
	
	return 0;
}
