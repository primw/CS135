/* Prim Wandeevong // CS 135 // Lab 3 // 2-11-19 */
#include <stdio.h>
int main()
{
	int w, x, y, z;
	
	printf("Enter four intergers (w, x, y , z): ");
	scanf("%d, %d, %d, %d", &w, &x, &y, &z);
	
	/* Condition 1 */
	if (w*x > y+z)
		printf("Condition 1 is true.\n");
	else 
		printf("COndition 1 is false.\n");
		
	/* Condition 2 */
	if (w%2 == 0 && x%2 == 0 && z%2 != 0 && y%2 != 0)
		printf("Condition 2 is true.\n");	
	else if (w%2 == 0 && y%2 == 0 && z%2 != 0 && x%2 != 0)
		printf("Conditon 2 is true.\n");
		
	else if (w%2 == 0 && z%2 == 0 && y%2 != 0 && x%2 != 0)
		printf("Condition 2 is true.\n");
		
	else if (x%2 == 0 && z%2 == 0 && w%2 != 0 && y%2 != 0)
		printf("Condition 2 is true.\n");
		
	else if (y%2 == 0 && x%2 == 0 && w%2 != 0 && z%2 != 0)
		printf("Condition 2 is true.\n");
		
	else if (y%2 == 0 && z%2 == 0 && w%2 != 0 && x%2 != 0)
		printf("Condition 2 is true.\n");
	
	else 
		printf("Condition 2 is false.\n");
		
	return 0;
	
}
	
	
		

	
	
	
	
