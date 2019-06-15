#include <stdio.h>
#pragma warning(disable:4996)

float Absolute(float a) {
	if (a < 0) {
		a *= -1;
	}
	return a;
}

int main() {
	float num = 0;
	printf("실수 값을 입력하세요 :");
	scanf("%f",&num);
	printf("절댓값은 %f입니다.",Absolute(num));
	return 0;
}