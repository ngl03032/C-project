#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a=10, b = 10;
	printf("정수 두 개를 입력하세요\n");
	scanf("%d %d", &a,&b);
	printf("두 수의 합: %d\n", a + b);
	printf("두 수의 차: %d\n", a - b);
}