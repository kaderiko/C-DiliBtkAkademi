#include <stdio.h>
#include <stdlib.h>


int iseven (int number)
{
	if((number % 2) == 0)
	{
		return 1;
	}	
	else
	{
		return 0;
	}
}



int main() 
{
	int number;
	
	printf("Sayi degerini giriniz: \n");
	scanf("%d", &number);
	
	if (iseven(number))
	{
		printf("Bir cift sayidir.");
	}
	else
	{
		printf("Tek sayidir.");
	}
	
	
	return 0;
}
