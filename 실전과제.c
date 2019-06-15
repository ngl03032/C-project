#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int x[2][3] = { {1,2,3},{3,2,1} };
	int y[3][2] = { {10,20},{30,40}, {50,60} };
	int z[2][2] = { 0 };
	int i, j, k;
	for (k = 0; k < 2;k++) {
		for (i = 0; i < 2;i++) {
			for (j = 0; j < 3; j++) {
				z[k][i] += x[k][j] * y[j][i];
			}
		}
	}
	printf("첫번째 행렬(2x3) : \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
	printf("두번째 행렬(2x3) : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%4d", y[i][j]);
		}
		printf("\n");
	}

	printf("행렬의 곱(2x2) : \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%4d", z[i][j]);
		}
		printf("\n");
	}
}