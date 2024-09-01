#include <stdio.h>
#include <stdlib.h>


int a = 15; //Global deðiþken


int Operation(int a, int b)
	{
		printf("a degiskeninin Operation fonksiyonu icerisindeki giris degeri = %d \n", a);
		printf("b degiskeninin Operation fonksiyonu icerisindeki giris degeri = %d \n", b);
		printf("\n ------------------------\n \n");
		
		a *= 12;
		b += 8;
		
		
		printf("a degiskeninin Operation fonksiyonu icerisindeki sonraki degeri = %d \n", a);
		printf("b degiskeninin Operation fonksiyonu icerisindeki sonraki degeri = %d \n", b);
		printf("\n ------------------------\n \n");
		
		return a + b;
	}
	
	
	
int main() 
{
	int a = 10;
	int b= 30;
	int c = 0;
	
	
	printf("a degiskeninin main() fonksiyonu icerisindeki  degeri = %d \n", a);
	printf("b degiskeninin main() fonksiyonu icerisindeki  degeri = %d \n", b);
	printf("\n ------------------------\n \n");
	
	c = Operation(a, b);
	printf("c degiskeninin main() fonksiyonu icerisindeki  degeri = %d \n", c);
	printf("\n ------------------------\n \n");
	
	printf("a degiskeninin main() fonksiyonu icerisindeki  degeri = %d \n", a);
	printf("b degiskeninin main() fonksiyonu icerisindeki  degeri = %d \n", b);
	printf("\n ------------------------\n \n");
	
	return 0;
}
