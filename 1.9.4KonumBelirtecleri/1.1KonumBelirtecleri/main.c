#include <stdio.h>
#include <stdlib.h>



void ValueIncrease(int k)
{
	//auto int i = 0;  
	static int i = 0;
	printf("%d", i);
	i += k;
	
	
}

int main() 
{
	ValueIncrease(3);
	ValueIncrease(3);
	ValueIncrease(3);
	ValueIncrease(3);	
	return 0;
}
