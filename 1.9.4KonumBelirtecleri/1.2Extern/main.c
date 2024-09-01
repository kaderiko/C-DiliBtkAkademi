#include <stdio.h>
#include <stdlib.h>



int x = 15;
int y = 20;

int main() 
{
	extern int y; //extern olarak tanýmlanmazsa deðeri 0 olur.
	
	printf("Global olan x degiskeninin degeri: %d \n", x);
	printf("Global olan y degiskeninin degeri: %d \n", y);
	
	printf("\n...........................\n \n");
	
	register int i;
	
	int number_array[5] = {8, 10, 12, 14, 16};
	for(i=0; i<5; i++)
	{
		printf("sayi disizi [%d] = %d \n", i, number_array[i]);
	}
	
	return 0;
}
