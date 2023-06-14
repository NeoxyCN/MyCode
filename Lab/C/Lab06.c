//matrix
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	//将矩阵的行列互换得到的新矩阵称为转置矩阵，转置矩阵的行列式不变。

	float mat[3][3];
	int i, i2;
	for (i = 0; i <= 2; i++) {
		scanf("%f %f %f", &mat[i][0], &mat[i][1], &mat[i][2]);

	}
	
	printf("原矩阵:\n");
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			printf("%f\t", mat[i][i2]);
		}
		printf("\n");
	}
	// 00 01 02
	// 10 11 12
	// 20 21 22
	// 01 - 10
	// 02 -20
	// 21 -12
	
	//复制mat到mat2
	float mat2[3][3];
	for (i=0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			mat2[i][i2] = mat[i][i2];
		}
	}

	//矩阵转置
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			mat2[i][i2] = mat[i2][i];
		}
	}

	printf("转置矩阵:\n");
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			printf("%f\t", mat2[i][i2]);
		}
		printf("\n");
	}

	float mat3[3][3];
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			mat3[i][i2] = mat2[i][i2] + mat[i][i2];
		}
	}

	printf("相加矩阵:\n");
	for (i = 0; i <= 2; i++) {
		for (i2 = 0; i2 <= 2; i2++) {
			printf("%f\t", mat3[i][i2]);
		}
		printf("\n");
	}

	return 0;
}

//	mat2[1][0] = mat[0][1];
//  mat2[0][1] = mat[1][0];
//  mat2[2][0] = mat[0][2];
//  mat2[0][2] = mat[2][0];
//  mat2[1][2] = mat[2][1];
//  mat2[2][1] = mat[1][2];
