#include <stdio.h>
#include <stdlib.h>





int main() 
{
	int number = 10;
	int * pointer;
	
	pointer = &number;
	
	printf("Sayi degiskeninin adresi: %d \n", &number);
	printf("Sayi degiskeninin icerigi: %d \n", number);
	printf("\n ............................ \n \n");
	
	printf("Isaretci degiskenin adresi: %d \n", &pointer);
	printf("Isaretci degiskenin icerigi: %d \n", pointer);
	printf("Isaretci degiskenin isaret ettigi deger: %d \n", *pointer);
	
	return 0;
}
