#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <math.h>

double stan(double arr[]);

int main() {
	double arr[5];

	printf("Enter 5 real numbers: ");
	scanf_s("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("Standard Deviation = %.3lf", stan(arr));

	return 0;
}

double stan(double arr[]) {
	double* ptr = arr;
	double sum = 0;
	double ave = 0;
	double std;
	for (int i = 0; i < 5; i++) {
		sum += *(ptr + i);
	}
	ave = sum / 5;
	sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += pow((*(ptr + i) - ave), 2);
	}
	std = sqrt(sum / 5);
	return std;
}