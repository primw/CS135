/* Prim Wandeevong // CS 135 // Lab 13 // 5-6-19 */
#include <stdio.h>
#include <string.h>
int strcomp(char *str1, char *str2);
int main(int argc, char* argv[])
{
	char first[11], last[14], number[12], email[40], model[20], ford[5] = "Ford";
	int make, comp;
	
	FILE *fp, *op;
	fp = fopen(argv[1], "r");
	op = fopen(argv[2], "w");
	
	char end = getc(fp);

	fprintf(op, "People eligible for recall:\n");
	
	fscanf(fp, "%s %s %s %s %s %s", first, last, number, email, model, email);

	while(end != EOF)
	{
		fscanf(fp, "%s %s %s %s %s %d", first, last, number, email, model, &make);
		
		comp = strcmp(ford, model);
		
		if((make <= 2010 && make >= 1990) && comp == 0)
		{
			fprintf(op, "%s %s %s %s\n", first, last, number, email);
		}
		
		end = feof(fp);
		
	}
	
	fclose(fp);
	fclose(op);
	
	return 0;
}
