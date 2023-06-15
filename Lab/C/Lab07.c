#include <stdio.h>

float average(float sum,int num) {
	return sum/num;
}

int main() {
	float arr[4][5];
	int i = 0, i2 = 0;
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 3; i2++) {
			scanf("%f", &arr[i][i2]);
		}
	}
	printf("原矩阵：\n");
	for (i = 0; i <= 2; i++) {
		printf("%f\t%f\t%f\t%f\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
	}

	float sum1 = 0;
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 3; i2++) {
			sum1 += arr[i][i2];
		}
		arr[i][4] = average(sum1,4);
		sum1=0;
	}
	float sum2 = 0;
	// 0 1 2 3 4
	//
	// 1 2 3 4 s  0
	// 1 2 3 4 s  1
	// 1 2 3 4 s  2
	// s s s s    3
	for (i = 0; i <= 3; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			// 00
			// 10
			// 20
			sum2 += arr[i2][i];
			arr[3][i] = average(sum2,3);
		}
		sum2=0;
	}

	printf("求平均值后矩阵:\n");
	for (i = 0; i <= 3; i++) {
		for (i2 = 0; i2 <= 4; i2++) {
			if (i == 3 && i2 == 4) {
				break;
			}
			printf("%f", arr[i][i2]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
