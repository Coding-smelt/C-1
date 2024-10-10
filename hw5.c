#include <stdio.h>

static int i = 1;
static int num = 0;

int bin(int x) {
	if (x % 2 == 1) {
		num += i;
	}
	i *= 10;
	if (x == 1) {
		return num;
	}
	bin(x / 2);
}

int main(void) {
	int num1;
	printf("Please enter a number: ");
	scanf("%d", &num1);
	printf("%d", bin(num1));
	return 0;
}