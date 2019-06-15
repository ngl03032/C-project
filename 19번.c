#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 10
#include <math.h>

int main() {
	int a[MAX] = { 0 };
	int i;
	double average = 0;
	double variance = 0;
	double deviation = 0;
	printf("실수 10개를 입력하세요 : ");
	for (i = 0; i < MAX; i++) {
		scanf("%d", a[i]);
	}
	double sum = 0;
	for (i = 0; i < MAX; i++) {
		sum += a[MAX];
	}
	average = sum / MAX;
	for (i = 0; i < MAX; i++) {
		sum = (a[i] - average) * (a[i] - average);
	}
	variance = sum / MAX;
	deviation = sqrt(variance);
	printf("평균은 %f", average);
	printf("분산은 %f", variance);
	printf("표준편자는 %f");
}