#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int myMatrix[2][3] = {{1, 3, 5}, {2, 4, 6}};
	
	int i, j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d", myMatrix[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0; 
}
