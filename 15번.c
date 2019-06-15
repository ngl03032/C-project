#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	float a = 0;
	printf("실수 하나를 입력하세요\n");
	scanf("%f", &a);
	printf("100을 곱한 값은: %f\n", a * 100);
}