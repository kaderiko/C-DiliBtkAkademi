#include <stdio.h>
#include <stdlib.h>


int cubeCalculus(int number);


int main() 
{
	int number, c;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &number);
	
	c = cubeCalculus(number);
	
	printf("%d sayisinin kubu = %d", number, c);
	
	return 0;
}


int cubeCalculus(number)
{
	return(number * number * number);
}
