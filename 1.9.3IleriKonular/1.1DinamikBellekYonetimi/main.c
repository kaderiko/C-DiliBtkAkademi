#include <stdio.h>
#include <stdlib.h>

/*malloc():  Memory Allocation (Bellek Tahsisi) 
Yýðýn (heap) üzerinde dinamik olarak bir bellek bloðu tahsis etmek için kullanýlýr. 
Blok boyutu kullanýcý tarafýndan bayt cinsinden belirtilir.
Fonksiyon, bloðun baþlangýcýna iþaret eden bir gösterici döner. Bellek tahsisi baþarýsýz olursa NULL döner.
Tahsis edilen bellek, rastgele deðerler içerir. */

/*calloc(): Contiguous Allocation (Birbirine Bitiþik Tahsis) 
bir dizi eleman için bellek tahsis etmek için kullanýlýr. Tahsis edilen bellek bloðundaki tüm baytlarý sýfýrla baþlatýr.
Fonksiyon iki argüman alýr: eleman sayýsý ve her bir elemanýn boyutu.
Fonksiyon, tahsis edilen belleðe iþaret eden bir gösterici döner. Bellek tahsisi baþarýsýz olursa NULL döner.*/


/*realloc(): Reallocate (Yeniden Tahsis) 
tahsis edilmiþ bir bellek bloðunu yeniden boyutlandýrmak için kullanýlýr. 
malloc() veya calloc() ile daha önce tahsis edilen bellek bloðunun boyutunu artýrabilir veya azaltabilir.
Yeni boyut daha büyükse, yeni alan baþlatýlmýþ veya baþlatýlmamýþ olabilir. Daha küçükse, fazla bellek serbest býrakýlýr.
Fonksiyon, yeniden tahsis edilen belleðe iþaret eden bir gösterici döner. Bellek tahsisi baþarýsýz olursa NULL döner. */

/*free(): Free (Serbest Býrak) 
 daha önce malloc(), calloc() veya realloc() ile tahsis edilen belleði serbest býrakmak için kullanýlýr.
Bu fonksiyon herhangi bir deðer döndürmez. 
free() fonksiyonu çaðrýldýktan sonra, belleðe referans vermek için kullanýlan gösterici geçersiz hale gelir. */


int main() 
{
	int i, n, *pointer, total=0;
	
	printf("Toplanacak eleman sayisini giriniz: ");
	scanf("%d", &n);
	
	pointer = (int*) malloc(n *sizeof(int));
	
	if(pointer == NULL)
	{
		printf("HATA!!!");
		exit(0);
	}
	
	printf("Toplanacak elemanlari giriniz: ");
	for(i=0; i < n; i++)
	{
		scanf("%d", pointer + i);
		total += *(pointer + i);
	}
	
	printf("Toplam: %d",total );
	
	free(pointer);
	
	
	
	return 0;
}
