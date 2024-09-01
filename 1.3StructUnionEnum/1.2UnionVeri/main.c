#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Union: Birleşim


union Data
{
	int i;
	float f;
	char str[20];
};




int main() 
{
	union Data data;
	
	data.i = 1;
	data.f = 27.50;
	strcpy(data.str, ": C Course");
	
	
	printf("Veri Buyuklugu: %d \n", sizeof(data));
	printf("data.i: %d \n ", data.i);
	printf("data.f: %.2f \n ", data.f);
	printf("data.str %s \n", data.str);	
	printf("\n ............................... \n");
	
	data.i = 103;
	
	printf("Veri Buyuklugu: %d \n", sizeof(data));
	printf("data.i: %d \n ", data.i);
	printf("data.f: %.2f \n ", data.f);
	printf("data.str %s \n", data.str);
	printf("\n ............................... \n");
	
	data.f = -200.4;
	
	printf("Veri Buyuklugu: %d \n", sizeof(data));
	printf("data.i: %d \n ", data.i);
	printf("data.f: %.2f \n ", data.f);
	printf("data.str %s \n", data.str);
	printf("\n ............................... \n");
	return 0;
}
