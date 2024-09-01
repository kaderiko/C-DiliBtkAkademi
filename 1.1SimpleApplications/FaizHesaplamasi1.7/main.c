#include <stdio.h>
#include <stdlib.h>

//Simple interest calculation

int main() 
{ 
	double principal, interest_rate, interest_number, time, total;
	
	printf("Enter the principal amount: ");
	scanf("%lf", &principal);
	
	printf("Enter the time: ");
	scanf("%lf", &time);
	
	printf("Enter the interest rate: ");
	scanf("%lf", &interest_rate);
	
	interest_number= (principal*time*interest_rate) / 100;
	printf("Interest number is: %.2lf \n", interest_number);
	
	total = interest_number + principal ;
	printf("Total interest number is: %.2lf", total);
	
	return 0;
}
