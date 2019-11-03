// Prim Wandeevong // CS 135 // Project 8 // 4-22-17 //
#include <stdio.h>

/* Function Declarations */
int strlength(const char* string);
char* strcopy(char* destination, const char* source);
char* strconcat(char* destination, char* source);
int strcomp(char *str1, char *str2);

int main()
{
	char str1[21], str2[21];
	char *p, *q;
	
	p = str1;
	q = str2;
		
	//Input to String 1
	printf("Please enter the first string: ");
	scanf("%s", str1);
	
	//Input to String 2
	printf("Please enter the second string: ");
	scanf("%s", str2);
	
	//String Length of Both
	printf("The length of string 1 is: %d\n", strlength(p));
	printf("The length of string 2 is: %d\n", strlength(q));
	
	//String Comparison
	switch(strcomp(p, q))
	{
		case 1:
			printf("String 1 comes before string 2 alphabetically.\n");
			break;

		case -1:
			printf("String 2 comes before string 1 alphabetically.\n");
			break;

		case 0:
			printf("The two strings are the same.\n");
			break;
	}
	
	//String Concatentation
	printf("String 1 after concatenation: %s\n", p);
	printf("String 2 after concatenation: %s\n", strconcat(q, p));

	//String Copy
	printf("String 1 after copying: %s\n", p);
	printf("String 2 after copying: %s\n", strcopy(q, p));
	

	return 0;
}

/* String Length Function */
int strlength(const char* string)
{
	int count = 0;
	
	for(int i = 0; *string != '\0'; string++)
	{
		count++;
	}
	
	return count;
}

/* String Copy Function */
char* strcopy(char* destination, const char* source)
{
	char* temp = destination;

	while(*source != '\0')
	{
		*destination = *source;
		
		source++;
		destination++;
	}	
	
	*destination = '\0';
	
	return temp; 
}

/* String Concatenation Function */
char* strconcat(char* destination, char* source)
{
	char* final = destination;

	while(*destination != '\0')
	{
		destination++;
	}

	do
	{
		*destination++ = *source++;
	}while(*source != '\0');

	*destination = '\0';
	
	return final;
}
	
/* String Compare Function */
int strcomp(char *str1, char *str2)
{
	for(int i = 0; i < 21; i++)
	{
		if(str1[i] != str2[i])
		{
			if (str1[i] < str2[i])
			{
				return -1;
			}
			else if (str1[i] > str2[i])
			{
				return 1;
			}
		}

		if (str1[i] == '\0')
		{
			return 0;
		}
	}
}

