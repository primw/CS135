/* Prim Wandeevong // CS 135 // Lab 4 // 2-25-19 */
#include <stdio.h>
int main()
{
	char c;
	int v = 0, n = 0, t = 0, s = 0, o = 0, total = 0;
	
	printf("Enter a sentence (ended by a '.' or '!' or '?'): ");
	scanf ("%c", &c);
	
	/* While chars are not "." "!" "?" */
	while (c != '.' && c != '!' && c != '?') {
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				v++;
				total++;
				break;
				
			case '\n':
				n++;
				total++;
				break;
			case '\t':
				t++;
				total++;
				break;
			case ' ': 
				s++;
				total++;
				break;
			default:
				o++;
				total++;
				break;
			}
		scanf("%c", &c);
		}
		
		/* Prints out results */
		printf("Total number of characters: %d\n", total);
		printf("Number of vowels: %d\n", v);
		printf("Number of newlines: %d\n", n);
		printf("Number of tabs: %d\n", t);
		printf("Number of spaces: %d\n", s);
		printf("Number of other characters: %d\n", o);
		
		
		

		
		return 0;
		
	}
		
		
		
		
				
				
	
	

