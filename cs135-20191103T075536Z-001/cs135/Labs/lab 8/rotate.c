// Prim Wandeevong // CS 135 // Lab 7 // 3-1-19 //
#include <stdio.h>

void rotate_left(int *one, int *two, int *three);

int main()
{
	int x, y, z;
	
	printf("Enter 3 integers (first second third): ");
	scanf("%d %d %d", &x, &y, &z);
	
	rotate_left(&x,&y,&z);
	
	printf("After the rotation (first second third): %d %d %d\n", x, y, z);
	
	return 0;
}

/* Rotate left function */
void rotate_left(int *one, int *two, int *three)
{
	int a = *one;
	
	*one = *two;
	*two = *three;
	*three = a;
	
}
