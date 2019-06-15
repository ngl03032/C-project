#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	float a = 0;
	printf("면적을 입력하세요(m2): ");
	scanf("%f", &a);
	printf("해당 면적은 %f평 입니다.", a / 3.3058);
}