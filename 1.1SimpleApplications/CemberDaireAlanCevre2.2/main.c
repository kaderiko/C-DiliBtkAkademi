#include <stdio.h>
#include <stdlib.h>

//Calculating the circle circumference and area

int main() 
{
	float radius, area, circumference, pi=3.14;
	
	printf("Enter the radius for circle: ");
	scanf("%f", &radius);
	
	circumference = 2 * pi * radius;
	printf("%f \n \n", circumference);
	
	area = pi * radius * radius;
	printf("%.f", area);
	return 0;
}
