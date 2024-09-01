#include <stdio.h>
#include <stdlib.h>

//Calculating the area and perimeter of a rectangle

int main() 
{
	float short_side, long_side, area, perimeter;
	
	printf("Enter the first side: ");
	scanf("%f", &short_side);
	
	printf("Enter the second side: ");
	scanf("%f", &long_side);
	
	area = (short_side * long_side);
	printf("Area is: %f \n", area);
	
	perimeter = (short_side * 2 + long_side * 2);
	printf("Perimeter is: %f", perimeter);
	
	return 0;
}
