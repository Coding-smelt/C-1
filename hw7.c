#include <stdio.h>

int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	
	int* ptr1 = arr1;
	int* ptr2 = arr2;

	for (int i = 0; i < 6; i++) {
		int temp;
		temp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = temp;
	}
	printf("\n");
	printf("\n");
	printf("after swap");
	printf("\n");
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}