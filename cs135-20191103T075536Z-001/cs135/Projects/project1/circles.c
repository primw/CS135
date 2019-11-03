#include <stdio.h>
int main(void)
{

/*Declares variables */
    int radii, length, width, perimeter, area, diameter;
    float circ, c_area, dif_area;
    #define pi 3.14f

/* User input */
    printf("This program computes values related to circles inscribed in a rectangle.\n");
    printf("Enter the value of the radii of the two circles: ");
    scanf("%d", &radii);

/* Calculates */
    length = radii * 4;
    width = radii * 2;
    perimeter = (2 * length) +(2 * width);
    area = length * width;
    diameter = radii * 2;
    circ = 2 * pi * radii;
    c_area = (pi * radii * radii) * 2;
    dif_area = area - c_area;

/* Displays results */
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    printf("The area of the rectangle is: %d\n", area);
    printf("The diameter of a circle is: %d\n", diameter);
    printf("The circumference of a circle is: %.3f\n", circ);
    printf("The total area of the circles is: %.3f\n", c_area);
    printf("The difference between the area of the rectangle and the total area of the circles is: %.3f\n", dif_area);

return 0;

}


