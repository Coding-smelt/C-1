#include <stdio.h>

int main(void) {
	int num;
	int oddNumbers[5];
	int evenNumbers[5];
	int j = 0;
	int k = 0;
	
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf(" %d", &num);
		if (num % 2 == 0) {
			evenNumbers[j] = num;
			j++;
		}
		else {
			oddNumbers[k] = num;
			k++;
		}
	}
	printf("Odd Numbers: ");
	for (int i = 0; i < k; i++) {
		printf("%d ", oddNumbers[i]);
	}
	printf("\n");
	printf("Even Numbers: ");
	for (int i = 0; i < j; i++) {
		printf("%d ", evenNumbers[i]);
	}


	return 0;
}