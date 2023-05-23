#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isEnglishChar(char input) {
	if (input >= 65 && input <= 122) {
		return 0;
	}
	return 1;
}

char transform(char input) {
	return (input - 4);
}

int main() {
	char c1, c2, c3, c4, c5;
	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
	int result = 0;
	result = isEnglishChar(c1)
		+ isEnglishChar(c2)
		+ isEnglishChar(c3)
		+ isEnglishChar(c4)
		+ isEnglishChar(c5);
	if (result == 0) {
		//全英文字符
		c1 = transform(c1);
		c2 = transform(c3);
		c3 = transform(c3);
		c4 = transform(c4);
		c5 = transform(c5);
		printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
	}
	else {
		//解码后非字符


	}
	return 0;
}
