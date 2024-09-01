#include <stdio.h>
#include <stdlib.h>




int main() 
{
	int *pointer, i, n1, n2;
	
	printf("Boyut giriniz: ");
	scanf("%d", &n1);
	
	pointer = (int*) malloc(n1 *sizeof(int));
	
	printf("Ayrilan (Tahsis Edilen) Ýlk Bellek Adresleri: \n");
	for(i=0; i < n1; i++)
	{
		printf("%pc \n", pointer + i);
	}
	
	printf("Yeni boyut giriniz: ");
	scanf("%d", &n2);
	
	pointer = realloc(pointer, n2 * sizeof(int));
	
	printf("Ayrilan (Tahsis Edilen) Yeni Bellek Adresleri: \n");
	for(i=0; i<n2; i++)
	{
		printf("%pc \n", pointer + i);
		
		free(pointer);
	}
	
	return 0;
}
