#include <stdio.h>
#include <stdlib.h>
#include <math.h> //M_PI (pi sayýsý) kullanýmý için


	float circle_diameter_calc(float radius);
	float circle_circumference_calc(float radius);
	float circle_area_calc(float radius);


int main() 
{
	float radius, diameter,  perimeter, area;

	printf("Cemberin / Dairenin Yaricapini giriniz:");
	scanf("%f", &radius);
	
	diameter = circle_diameter_calc(radius);
	perimeter = circle_circumference_calc(radius);
	area = circle_area_calc(radius);
		
	printf("Dairenin / Cemberin capi: %.2f, cevresi: %.2f, alani: %.2f", diameter, perimeter, area);
	
	return 0;
}


float circle_diameter_calc(float radius)
{
	return(2 * radius);
}


float circle_circumference_calc(float radius)
{
	return(2 * M_PI * radius);
}


float circle_area_calc(float radius)
{
	return(M_PI * radius * radius);
}
