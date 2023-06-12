#include <stdio.h>

int main() {
	//0开始 0!=1

	//printf("%lf",fact(20));
	//1*2
	//1*2*3
	float e = 1, n = 1;
	int i = 0;
	while ((1 / n) >= 1E-6) {
		i++;
		n *= i;
		e += (1 / n);
	}


	printf("%lf", (e));
	return 0;
}
