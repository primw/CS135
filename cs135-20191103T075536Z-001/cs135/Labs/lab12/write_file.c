/* Prim Wandeevong // CS 135 // Lab 12 // 4-29-19 */
#include <stdio.h>
int main()
{
	char first[50], last[50], outputFile[100];
	int age[1000];
	
	FILE *fp;
	
	printf("Enter in a name for the output file: ");
	scanf("%s", outputFile);
	fp = fopen(outputFile, "w");
	
	for(int i = 1; i <= 5; i++)
	{
		printf("Enter person %d (age, first last): ", i);
		scanf("%d, %s %s", age, first, last);
		fprintf(fp, "%d, %s %s\n", *age, first, last);
	}
	
	fclose(fp);
	
	return 0;
}
