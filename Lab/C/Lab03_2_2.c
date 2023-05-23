#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char transform(char input) {
	return (input - 4);
}

int main() {
	char c[5];
	scanf("%c%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4]);
	int result = 0;
	for (int i = 0; i <= 4; i++) {
		if (isalpha(c[i])) {
			c[i] = transform(c[i]);
			printf("%c", c[i]);
		}
		else {
			printf("%c", c[i]);
		}

	}
	return 0;
}
