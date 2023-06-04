#define _CRT_SECURE_NO_WARNINGS
#define WRITENBYNEO
#include <stdio.h>
#include <ctype.h>

// 如果是字母则需要转换
char transform(char input) {
	/*if (input <= 90 && input >= 65) {
		return (input - 4);
	}
	if (input <= 122 && input >= 97) {
		return (input - 4);
	}
	return (input - 4);
	*/
	/*int pre = input - 4;
	if (!(input < 65)) {
		// 65 66 ..... 90
		// A  B  ..... Z

	//TODO 新的算法

	}

	if (!(input > 90 && input < 97)) {

	}

	if (!(input > 122)) {

	}
	*/
	//首先减4
	input = input - 4;
	//再判断减去4之后是不是字母
	if (isalpha(input)) {
		return input;
	} else {
		input = input + 26;
		return input;

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
		} else {
			printf("%c", c[i]);
		}
	}

	return 0;
}














































