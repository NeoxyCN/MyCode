#include <stdio.h>

double fac(int num) {
	int result = num;
	for (int i = num; (i - 1) > 1; i--) {
		result = result * (i - 1);
	}
	return result;
}

int main() {
	//0!=1
	int i = 1;
	double e = 1, n = 0;
	while ((1 / n) >= 1E-6) {
		n = fac(i);
		e += (1 / n);
		i++;
	}
	printf("%f", e);
	return 0;
}
