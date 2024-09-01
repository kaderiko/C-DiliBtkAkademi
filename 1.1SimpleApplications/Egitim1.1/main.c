#include <stdio.h>
#include <stdlib.h>

//Dennis Ritche tarafýndan geliþtirildi. Orjinal kullaným amacý UNIX iþletim sisteminin geliþtirilmesi.
//Algoritma: bir iþin nasýl yapýlacaðýný tarif eden adýmlar kümesi
/* Ondalýklý veya Kesirli Sayý (float, double),
Tamsayý (integer, int),
Boolean (bool, boolean),
Numaralandýrýlmýþ Tip (enum) */

int main(int argc, char *argv[])  //Ana program
{

int sayi1, sayi2;
int toplam, fark, carpim, mod;
float bolme;

printf("Lutfen iki sayi giriniz ");
scanf("%d %d", &sayi1, &sayi2);

printf("Sayilarin Toplami %d \n", sayi1 + sayi2);
//scanf(); girdi almayý saðlar.

printf("Sayilarin Farki %d \n", sayi1 - sayi2);

printf("Sayilarin Carpimi %d \n", sayi1 * sayi2);

printf("Sayilarin Modu: %d \n", sayi1 % sayi2);

	return 0; //return 1 demek ve baþarýlý bir þekilde tamamlandýðýnda program 0'ý gösterecek diyor.
}
