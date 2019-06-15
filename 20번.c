#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a = 0;
	printf("16진수로 정수를 입력하세요: ");
	scanf("%x", &a);
	printf("%x는 10진수로 %d입니다.",a, a);

}