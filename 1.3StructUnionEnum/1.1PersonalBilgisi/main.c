#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Struct:Yapý

struct PersonalInfo
{
	int age;
	int salary;
	char name[30];
	char gender[8];
};



int main() 
{
	
	struct PersonalInfo Personal1;
	
	strcpy(Personal1.name, "Kader");
	strcpy(Personal1.gender, "Kadin");
	Personal1.age = 21;
	Personal1.salary = 21000;
	
	
	printf("Personalin Adi: %s \n", Personal1.name);
	printf("Personalin Cinsiyeti: %s \n", Personal1.gender);
	printf("Personalin Yasi: %d \n", Personal1.age);
	printf("Personalin Maasi: %d \n", Personal1.salary);
	printf("\n ..............................\n");
	
	return 0;
}
