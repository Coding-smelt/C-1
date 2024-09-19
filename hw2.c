#include <stdio.h>
#include <stdint.h>


int main(void) {
	//개념 확인 과제
	float distance;
	float mile;
	printf("Please enter kilometers: ");
	scanf("%f", &distance);
	mile = (distance / 1.609);
	printf("%.1fkm is equal to %.1f miles\n", distance, mile);


	return 0;
}