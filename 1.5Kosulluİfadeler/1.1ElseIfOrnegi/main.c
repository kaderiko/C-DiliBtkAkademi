#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int cost, sales_price, profit_loss;
	
	printf("Maaliyet bedelini giriniz: \n");
	scanf("%d", &cost);
	
	printf("Satis bedelini giriniz: \n");
	scanf("%d", &sales_price);
	
	if(sales_price > cost)
	{
		profit_loss = sales_price - cost;
		printf("Kar = %d \n", profit_loss);
	}
	else if(sales_price < cost)
	{
		profit_loss = cost - sales_price;
		printf("Zarar = %d \n", profit_loss);
	}
	else
	{
		printf("Kar ve zarar yoktur.");
	}
	return 0;
}
