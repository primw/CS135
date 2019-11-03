// Prim Wandeevong // CS 135 // Lab 11 // 4-22-19 //
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int num, size;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	for( int i = 1; i < argc; i++)
	{
		size = strlen(argv[i]);
		
		if(size >= num)
		{
			printf("%s has at least %d characters\n", argv[i], num);
		}
	}
	
	return 0;
}
		
