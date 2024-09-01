#include <stdio.h>
#include <stdlib.h>

int Factorial(int n);

int main() 
{
	int value = 5;
	
	printf("%d! = %d \n", value, Factorial(value));
	
	return 0;
}


int Factorial(int n)
{
	int f;
	
	if(n == 1)
	{
		f = 1;
	}
	else
	{
		f = n * Factorial(n - 1);
		return f;
	}
}
