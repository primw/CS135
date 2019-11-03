/* Prim Wandeevong // CS 135 // Lab 12 // 4-29-19 */
#include <stdio.h>
int main(int agrc, char* argv[])
{
	char first[50], last[50], outputFile[100];
	int age[1000];
	
	FILE *fp;
	fp = fopen(argv[1], "r");
	
	for(int i = 1; i <= 5; i++)
	{
		fscanf(fp, "%d, %s %s", age, first, last);
		printf("Name, Age: %s %s, %d\n", first, last, *age);
	}
	
	fclose(fp);
	
	return 0;
}
	
