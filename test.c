#include <stdio.h>

int main() {
	int a;
	int *p1;
	scanf("%d", &a);
	p1 = &a;
	printf("%d %d\n", a, &a);
	printf("%d %d\n", *p1, p1);
	printf("%d", &p1);
	return 0;
}
