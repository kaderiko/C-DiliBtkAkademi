#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//String operations in C programing language 

int main() 
{
	char England_alphabet[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	printf("%d \n \n", strlen(England_alphabet));
	printf("%d \n \n", sizeof(England_alphabet));
	
	char Turkish_alphabet[]= "ABCÇDEFGÐHIÝJKLMNOÖPRSÞTUÜWZ" ;
	printf("%d \n \n", strlen(Turkish_alphabet));
	printf("%d", sizeof(Turkish_alphabet));
	return 0;
}
