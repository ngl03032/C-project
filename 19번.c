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
	printf("�Ǽ� 10���� �Է��ϼ��� : ");
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
	printf("����� %f", average);
	printf("�л��� %f", variance);
	printf("ǥ�����ڴ� %f");
}