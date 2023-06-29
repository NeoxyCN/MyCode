#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>

int main() {

	FILE *fp=NULL;
	char buff[255];

	fp = fopen("first.txt", "r");
	fgets(buff, 255, (FILE*)fp);
	if ((fp = fopen("first.txt", "r") )== NULL) {
		printf("can not open first.txt\n");
		return 0;
	}

	if (fp = fopen("second.txt", "w") == NULL) {
		printf("can not open second.txt\n");
		return 0;
	}
	fputs(buff, fp);

	return 0;
}
