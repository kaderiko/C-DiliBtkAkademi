#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrong(int number);

int main() 
{
	int number;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &number);
	
	if(isArmstrong(number))
	{
		printf("Bir Armstrong sayidir. \n", number);
	}
	else
	{
		printf("Bir Armstrong sayi degildir. \n", number);
	}
	
	return 0;
}

/*n basamaklı bir sayı için;
Örnek 2: 1634 = (1^4) + (6^4) + (3^4) + (4^4)
1634 bir Armstrong Sayısıdır. 1 + 1296 + 81 + 256 */


int isArmstrong(number)
{
	int last_step, total, origin_number, step_number;
	total = 0;
	
	origin_number = number;
	
	step_number = (int) log10(number) + 1;
	
	while(number > 0)
	{
		last_step = number % 10;
		
		total = total + round(pow(last_step, step_number));
		
		number = number / 10;
	}
	
	return (origin_number == total);
}
