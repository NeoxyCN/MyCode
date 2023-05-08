#include <stdio.h>

int main() {
	int line;
	int spaceNum;
	int width;
	int charNum;
	width = 10;
	for (line = 0; line <= 10; line++) {
		charNum = width - line;
		spaceNum = line - charNum;
		int i;
		for (i = 0; i <= spaceNum; i++) {
			printf(" ");
		}
		int j;
		for (j = 0; i <= charNum; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
