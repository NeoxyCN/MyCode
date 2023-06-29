#include <stdio.h>

void Average(double arr[][5], int row, int col) {
	double sum;
	for (int i = 0; i < row; i++) {
		sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		arr[i][col] = sum / col;
	}
	for (int j = 0; j < col; j++) {
		sum = 0;
		for (int i = 0; i < row; i++) {
			sum += arr[i][j];
		}
		arr[row][j] = sum / row;
	}
}

int main() {
	double arr[4][5];
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%lf", &arr[i][j]);
		}
	}
	
	Average(arr, 3, 4);
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 3 && j == 4) {
				break; 
			}
			printf("%g ", arr[i][j]);
		}
		printf(":\n");
	}
	
	return 0;
}
