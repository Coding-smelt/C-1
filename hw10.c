#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct country{
	char capital[20];
	char country[20];
	char population[20];
}Country;

int main(void) {
	Country arr[3];
	printf("Input three cities:  \n");
	for (int i = 0; i <3; i++) {
		printf("Name> ");
		fgets(arr[i].capital, sizeof(arr[i].capital), stdin);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> ");
		fgets(arr[i].population, sizeof(arr[i].population), stdin);
		
	}
	for (int i = 0; i < 3; i++) {
		int last1 = strlen(arr[i].capital);
		int last2 = strlen(arr[i].country);
		int last3 = strlen(arr[i].population);
		arr[i].capital[last1 - 1] = 0;
		arr[i].country[last2 - 1] = 0;
		arr[i].population[last3 - 1] = 0;
	}
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++) {
		printf("%s in %s with a population of %s people \n", arr[i].capital, arr[i].country, arr[i].population);
	}
	return 0;
}

