// Prim Wandeevong // CS 135 // Lab 10 // 4-15-19 //
#include <stdio.h>
int main()
{
	char str[21], vowels[21], consonants[21];
	char *strPointer, *vowelPointer, *consonantPointer;
	
	printf("Enter a string (20 characters maximum): ");
	scanf("%s", str);
	
	strPointer = &str[0];
	vowelPointer = &vowels[0];
	consonantPointer = &consonants[0];
	
	while (*strPointer != '\0')
	{
		if(*strPointer == 'a' || *strPointer == 'e' || *strPointer == 'i' || *strPointer == 'o' || *strPointer== 'u' || *strPointer == 'A' || *strPointer == 'E' || *strPointer == 'I' || *strPointer == 'O' || *strPointer == 'U' )
		{
			*vowelPointer = *strPointer;
			vowelPointer++;
		}
		else
		{
			*consonantPointer = *strPointer;
			consonantPointer++;
		}
		
		strPointer++;
	}

	*vowelPointer = '\0';
	*consonantPointer = '\0';
	
	vowelPointer = &vowels[0];
	consonantPointer = &consonants[0];
	
	
	printf("Original string: %s\n", str);
	printf("All the vowels: %s\n", vowelPointer);
	printf("All the consonants: %s\n", consonantPointer);
	
	return 0;
}
	
	
		
	
	
	
