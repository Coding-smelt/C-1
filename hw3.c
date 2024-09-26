#include <stdio.h>


int main(void) {
	int i, j, k;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < (4 - i); j++) {
			printf(" ");
		}
		for (k = 0; k < ((2 * i) + 1); k++) {
			printf("*");
		}
		for (j = 0; j < (4 - i); j++) {
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}


