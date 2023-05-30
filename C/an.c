#include <stdio.h>


int main() {
	
	clear();
	while (0) {
		printf("/");
		clear();
		printf("|");
		clear();
		printf("\\");
		clear();
		printf("-");
		clear();
	}
}

int clear() {
	printf("%c", 8);
}
