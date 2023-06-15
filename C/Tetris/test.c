#include <stdio.h>

int main() {
	int i;
	int i2;
	for (i = 0; i <= 15; i++) {
		
		for (i2 = 0; i2 <= (15 - 1); i2++) {
			printf(" ");
		}
		printf("|\n");
	}
	
	for (i = 0; i <= 15; i++) {
		printf("=");
	}
}
