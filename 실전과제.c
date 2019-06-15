#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char a = ' ';
	int b = 0;
	float c = 0;
	printf("문자를 입력하세요: ");
	scanf("%c", &a);
	printf("정수를 입력하세요: ");
	scanf("%d", &b);
	printf("실수를 입력하세요: ");
	scanf("%f", &c);
	printf("문자:%c,정수:%d,실수:%f", a, b, c);

}