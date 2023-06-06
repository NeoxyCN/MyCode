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
	double e = 1.0, sum = 0;
	int i = 1;
	do{
		sum =sum + fac(i);
		e = e+(1.0/sum);
		//printf("%d", fac(i));

		i++;
		printf("%lf\n", e);
	} while (!( e< 10E-6));
	printf("%f", e);
	return 0;
}
