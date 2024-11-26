#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convCase(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else {
		return ch;
	}
}



int main(void) {
	
	char str[50];
	char str2[50];
	char ch1;

	printf("Input>  ");
	fgets(str,sizeof(str), stdin);
	printf("Output> ");

	for (int i = 0; i < strlen(str); i++) {
		fputc(convCase(str[i]), stdout);
	}
	return 0;
}

