#include <stdio.h>
#include <stdlib.h>
#define VERI_BOYUTU 1000


int main() 
{
	// Veri boyutunu depolayan karakter dizisi
	char veri[VERI_BOYUTU];
	
	//File pointer to hold reference to our file
	FILE *fPtr;
	
	//Dosyayý w (write) modunda aç.
	//"data/file1. txt” dosyanýn güzergahý.
	fPtr = fopen("dosya1.txt", "w+");
	
	//fopen(), eðer baþarýsýz ise NULL döner.

	if(fPtr == NULL)
	{
		//Dosya oluþturulamadýðý için programdan çýk.
		printf("Dosya olusturulamadi. \n");
		exit(EXIT_FAILURE);
	}
	
	
	//Dosyaya kaydedilecek olan girdileri kullanýcýdan al
	printf("Dosyaya kaydedilecek olan girdiyi al");
	fgets(veri, VERI_BOYUTU, stdin);

	//Veriyi dosyaya yaz
	fputs(veri, fPtr);
	
	fclose(fPtr);
	
	return 0;
}
