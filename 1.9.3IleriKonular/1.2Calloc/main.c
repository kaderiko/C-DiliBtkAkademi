#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, n, *pointer, total=0;
	
	printf("Toplanacak eleman sayisini giriniz: ");
	scanf("%d", &n);
	
	pointer = (int*) calloc(n, sizeof(int));
	
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
