#include <stdio.h>

int main() {
	int line;
	scanf("%d", &line);
	for (int i = 0; i <= line; i++) {
		for (int d = 0; d <= i; d++) {
			printf("*");
		}
		printf("\n");
	}
}
