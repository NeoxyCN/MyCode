#include <stdio.h>

//float 限7位
//double 限15位

int main() {
	double f;
	scanf("%lf", &f);

	if (f < 0) {
		printf("%lf", -f);
	}
	else
	{
		printf("%lf", f);
		
	}
}
