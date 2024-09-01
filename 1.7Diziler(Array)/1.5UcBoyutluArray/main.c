#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int myMatrix[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, 
							 {{13, 14, 15, 16}, {-5, 0, 45, 56}, {78, 79, -9, -7}}};
		
	int i, j, k;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<4; k++)
			{
				printf("%d \t", myMatrix[i][j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}
