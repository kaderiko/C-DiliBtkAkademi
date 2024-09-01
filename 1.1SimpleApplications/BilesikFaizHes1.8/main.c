#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Simple and compound interest calculation

int main() 
{
	float main_money, interest_rate, compound_interest_number, time;
	
	printf("Enter the main money: ");
	scanf("%f", &main_money);
	
	printf("Enter the interest_rate: " );
	scanf("%f", &interest_rate);
	
	printf("Enter the time: ");
	scanf("%f", &time);
	
	compound_interest_number = main_money*(pow((1 + interest_rate /100), time));
	printf("Total compound interest number is: %.2f", compound_interest_number);
	return 0;
}
