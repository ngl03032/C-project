#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	double arr[5] = {5.0,2.0,3.0,4.0,5.0};
	double *p = arr;
	double sum = 0, average = 0;
	int i = 0;
	for (i = 0; i < 5; i++) {
		sum += p[i];
	}
	printf("합계는 : %lf", sum);
	average = sum / 10;
	printf("평균은 : %lf", average);

	

	
}