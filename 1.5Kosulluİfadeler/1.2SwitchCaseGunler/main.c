#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int day;
	
	printf("Haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
			printf("Pazartesi");
			break;
			
		case 2:
			printf("Sali");
			break;
			
		case 3:
			printf("Carsamba");
			break;
			
		case 4:
			printf("Persembe");
			break;
			
		case 5:
			printf("Cuma");
			break;
			
		case 6:
			printf("Cumartesi");
			break;
			
		case 7:
			printf("Pazar");
			break;
			
		default:
			printf("Gecersiz deger!!!");			
	}
	return 0;
}
