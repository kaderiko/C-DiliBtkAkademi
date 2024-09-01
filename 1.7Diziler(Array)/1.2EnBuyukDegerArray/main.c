#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int myArray[] = {3, 9, 7, 6, 1, 8};
	int biggest_value = myArray[0];
	int location = 0;
	
	int size = sizeof (myArray) / sizeof (myArray[0]);
	
	
	int index;
	for(index = 0; index < size; index++)
	{
		if(myArray[index] > biggest_value)
		{
			biggest_value = myArray[index];
			location = index;
		}
	} 
	
	printf("Dizinin en buyuk elemani, %d indeksli konumda bulunan %d degeridir. \n", location, biggest_value);
	
	return 0;
}
