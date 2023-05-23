#define _CRT_SECURE_NO_WARNINGS
#define WRITENBYNEO
#include <stdio.h>
#include <ctype.h>

char transform(char input) {
	/*if (input <= 90 && input >= 65) {
		return (input - 4);
	}
	if (input <= 122 && input >= 97) {
		return (input - 4);
	}
	return (input - 4);
	*/
	int pre = input - 4;
	if (!(input < 65)) {
		// 65 66 ..... 90 
		// A  B  ..... Z
    
    //TODO

	}

	if (!(input > 90 && input < 97)) {

	}

	if (!(input > 122)) {

	}


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
