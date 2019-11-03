// Prim Wandeevong // CS 135 // Project 7 // 4-1-19 //
#include <stdio.h>

/* Function Declarations */
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void divide(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void read_num(float* real_part, float* imaginary_part);
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2);
void print_complex(float real_part, float imaginary_part);
int mainChoice();

/* Main Function */
int main()
{
	int input, exit = 0;
	float r1, r2, i1, i2, real_part, imaginary_part, real_result, imaginary_result;
	
	while (exit != 1)
	{
		input = mainChoice();
		
		switch(input)
		{
			case 1: read_nums(&r1, &i1, &r2, &i2);
				add(r1, i1, r2, i2, &real_result, &imaginary_result);
				print_complex(real_result, imaginary_result);
				break;
				
			case 2: read_nums(&r1, &i1, &r2, &i2);
				subtract(r1, i1, r2, i2, &real_result, &imaginary_result);
				print_complex(real_result, imaginary_result);
				break;
				
			case 3: read_nums(&r1, &i1, &r2, &i2);
				multiply(r1, i1, r2, i2, &real_result, &imaginary_result);
				print_complex(real_result, imaginary_result);
				break;
				
				
			case 4: read_nums(&r1, &i1, &r2, &i2);
				divide(r1, i1, r2, i2, &real_result, &imaginary_result);
				print_complex(real_result, imaginary_result);
				break;
				
			case 5: printf("Bye!\n");
				exit = 1;
				break;
				
			default:printf("Please input a valid option\n");
				break;
		}
	}
	
	return 0;
}

// Add Function
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
	*imaginary_result = imaginary_part_1 + imaginary_part_2;
	*real_result = real_part_1 + real_part_2;
}

// Subtract Function
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
	*imaginary_result = imaginary_part_1 - imaginary_part_2;
	*real_result = real_part_1 - real_part_2;
}

// Multiply Function
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
	float w, x, y, z;
	
	w = real_part_1 * real_part_2;
	x = real_part_1 * imaginary_part_2;
	y = imaginary_part_1 * real_part_2;
	z = imaginary_part_1 * imaginary_part_2;
	
	*imaginary_result = x + y;
	*real_result = w - z;
}

// Divide Function
void divide(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
	float w, x, y, z;
	float w2, x2, y2, z2;
	float con_real_part = real_part_2, con_imaginary_part = -imaginary_part_2;
	
	/* Complex Number 1 FOIL */
	w = real_part_1 * con_real_part;
	x = real_part_1 * con_imaginary_part;
	y = imaginary_part_1 * con_real_part;
	z = imaginary_part_1 * con_imaginary_part;
	real_part_1 = w - z;
	imaginary_part_1 = x + y;
	
	/* Complex Number 2 FOIL */
	w2 = real_part_2 * con_real_part;
	x2 = real_part_2 * con_imaginary_part;
	y2 = imaginary_part_2 * con_real_part;
	z2 = imaginary_part_2 * con_imaginary_part;
	real_part_2 = w2 - z2;
	imaginary_part_2 = x2 + y2;
	
	*real_result = real_part_1 / real_part_2;
	*imaginary_result = imaginary_part_1 / real_part_2;
}
	 
	
// Read Real + Imaginary Part Function
void read_num(float* real_part, float* imaginary_part)
{
	printf("Please type in the real component: ");
	scanf("%f", real_part);
	
	printf("Please type in the imaginary component: ");
	scanf("%f", imaginary_part);
}

// Read Numbers Function
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2)
{
	printf("Reading the first imaginary number...\n");
	read_num(real_part_1, imaginary_part_1);
	
	printf("Reading the second imaginary number...\n");
	read_num(real_part_2, imaginary_part_2);
}

// Print Complex Function
void print_complex(float real_part, float imaginary_part)
{
	printf("The operation yields %6.3f + %6.3fi\n", real_part, imaginary_part);
}
	
// Main Menu Function
int mainChoice()
{
	int input;
	
	printf("Complex Number Arithmetic Program:\n");
	printf("1) Add two complex numbers\n");
	printf("2) Subtract two complex numbers\n");
	printf("3) Multiply two complex numbers\n");
	printf("4) Divide two complex numbers\n");
	printf("5) Quit\n");
	
	printf("Choose an option (1 - 5): ");
	scanf("%d", &input);
	
	return input;
	
}









