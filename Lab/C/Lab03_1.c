#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5;
	/*
	scanf("%c\n", &c1);
	scanf("%c\n", &c2);
	scanf("%c\n", &c3);
	scanf("%c\n", &c4);
	scanf("%c\n", &c5);
	*/

	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);


	c1 = c1 - 4;
	c2 = c2 - 4;
	c3 = c3 - 4;
	c4 = c4 - 4;
	c5 = c5 - 4;

	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
	/*
	printf("%c", c1);
	printf("%c", c2);
	printf("%c", c3);
	printf("%c", c4);
	printf("%c", c5);
	*/
	return 0;
}
