#include <stdio.h>


int main(void) {
	int num;
	int count = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++){
		if (num % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		printf("It is a prime number.\n");
	}
	else {
		printf("It is not a prime number\n");
	}
	return 0;
	}

