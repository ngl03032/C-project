#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a[3][3] = {0};
	int b[3][3] = {0};
	int c[3][3] = {0};
	int i, j;
	printf("첫번째 행렬을 입력하세요(3x3) \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("듀번째 행렬을 입력하세요(3x3) \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("y[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("행렬의 차는.\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
	return 0;

	
}