#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int number_to_add, number_to_index;
	int myArray[] = {3, 4, 9, 8, 7, 1, 5};
	int size = sizeof (myArray) / sizeof(myArray[0]);
	
	int index;
	for(index = 0; index < size; index++)
	{
		printf("%d \t", myArray[index]);
	}
	
	printf("\n ------------------------ \n");
	
	printf("Diziye eklenecek sayiyi giriniz: \n");
	scanf("%d", &number_to_add);
	
	printf("Diziye eklencek indeksi giriniz: \n");
	scanf("%d", &number_to_index);
	
	printf("\n ------------------------ \n");
	
	for(index = size - 1; index > number_to_index; index--)
	{
		myArray[index] = myArray[index - 1];
	}
	myArray[number_to_index] = number_to_add;
	
	
	for(index = 0; index < size; index++)
	{
		printf("%d \t", myArray[index]);
	}
	
	return 0;
}
