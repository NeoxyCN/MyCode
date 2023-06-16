#include <stdio.h>

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int i2 = 1; i2 <= i; i2++) {
			printf("%d*%d=%d\t", i2, i, i * i2);
		}
		printf("\n");
	}
	// 1x1
	// 1x2 2x2
	// 1x3 2x3 3x3
}
