#include <stdio.h>
#include <stdlib.h>


//constant: sabit
//define: Tanımlamak --> Kullancıya önceden uyarı mahiyetinde bilgi verir ya da ön koşul verir.
//undef: define ın kapsamını kaldırmamızı sağlar. define ile tekrardan bir değer atayabiliriz sonra.

int main() 
{
	const int minute = 60;
	const float PI = 3.14;
	
	printf("Saatteki dakika sayisi: %d \n", minute);
	printf("PI sayisi: %.2f \n", PI);
	
	//PI = PI + 5 dersek hata alırız.
	
	return 0;
}
