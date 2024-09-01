#include <stdio.h>
#include <stdlib.h>



int main() 
{
	char character = 'C';
	int integer = 1;
	float real_number =	10.3f;
	long long big_integer = 18646246;
	
	
	printf("Karakter degiskeninin degeri: %c, karakter degiskeninin adresi: %u \n", character, &character);
	printf("Tam sayi degiskeninin degeri: %d, tam sayi degiskeninin adresi: %u \n", integer, &integer);
	printf("Gercel sayi degiskeninin degeri: %f, gercel sayi degiskeninin adresi: %u \n", real_number, &real_number);
	printf("Buyuk tam degiskeninin degeri: %ld, buyuk tam sayi degiskeninin adresi: %u \n", big_integer, &big_integer);
	
	return 0;
}
