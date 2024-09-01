#include <stdio.h>
#include <stdlib.h>
//#define VERI_BOYUTU 1000


int main() 
{
/*	// Veri boyutunu depolayan karakter dizisi
	char veri[VERI_BOYUTU];
	
	
	//File pointer to hold reference to our file
	FILE *fPtr;
	
	//Dosyayý w (write) modunda aç.
	//"data/file2. txt” dosyanýn güzergahý.
	fPtr = fopen("dosya2.txt", "w+");
	
	
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
	
	fclose(fPtr); */
	
	
	
	FILE *fPtr;
	char character;
	
	fPtr = fopen("dosya2.txt", "r");
	
	
	//fopen(), eðer baþarýsýz ise NULL döner */
	if(fPtr == NULL)
	{
		//Dosya okunamadýðý için programdan çýk */
	printf("Dosya okunmadi. \n");
	printf("Dosyanýn ilgili konumda olup olmadigini ve de erisim yetkiniz olup olmadigini kontrol edin");
	exit(EXIT_FAILURE);
	}
	
	
	printf("Dosya basariyla acildi; icerigi okunuyor. \n \n");
	
	do
	{
		//Dosyadan bir karakter oku.
	character = fgetc(fPtr);
	
	//Dosyadan okuduðun karakteri konsola yazdýr */
	putchar(character);
	}
	while(character != EOF);	//Bunu, EOF (End Of File) karakterine denk gelmediðin sürece yap.
	
	//Dosyayla isimiz bitti; kendisine baska uygulamalarin da erisebilmesi için serbest birak.
	fclose(fPtr);

	
	return 0;
}
