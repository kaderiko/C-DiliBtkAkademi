#include <stdio.h>
#include <stdlib.h>

int isPrime(int number);


int main() 
{
	int number;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &number);
	
	if(isPrime(number))
	{
		printf("Bir asal sayidir.");
	}
	else
	{
		printf("Bir asal degildir.");
	}
	
	return 0;
}

int isPrime(number)
{
	int i;
	
	for(i = 2; i <= number / 2; number++)
	{
		if(number % i == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
