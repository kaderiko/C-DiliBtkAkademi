#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Concatenate, copy and compare operations in C programming language 

int main() 
{
	char text1[20]="Hello ";
	char text2[]="World!";
	char text3[20];
	
	strcat(text1, text2); //strcat: string concatenate
	printf("%s \n", text1);
	
	strcpy(text3, text1);
	printf("%s \n", text3);
	
	printf("%d \n", strcmp(text1, text3));
	printf("%d \n", strcmp(text1, text2));
	printf("%d \n", strcmp(text2, text3));
	return 0;
}
