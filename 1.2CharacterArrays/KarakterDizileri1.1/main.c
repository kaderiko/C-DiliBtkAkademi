#include <stdio.h>
#include <stdlib.h>

//Performing operations on strings in the C programming language.

int main() 
{
	char character= 'c';
	printf("%c \n", character);
	
	char message[]= "Hello World";
	printf("%s \n", message);
	
	
	
	char welcome_message1[] ="HELLO!"; //We have a null character, so the result is 7 characters (because of string)
	printf("%lu \n",sizeof(welcome_message1));
	
	char welcome_message2[]= {'H', 'E', 'L', 'L', 'O', '!', '\0'};
	printf("%lu", sizeof(welcome_message2));
	return 0;
}
