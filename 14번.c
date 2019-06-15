#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int Round(float a) {
	int realnumber;
	float temp;
	realnumber = (int)a;
	temp = a - realnumber;
	if (a> 0) {
		if (temp >= 0.5) {
			realnumber++;
		}
		if (temp <= -0.5) {
			realnumber--;
		}
	}
	return realnumber;
}

int main() {
	float num;
	printf("실수값을 입력하세요: ");
	scanf("%f", &num);
	printf("반올림 결과 : %d", Round(num));
	system("pause");
	return 0;
}