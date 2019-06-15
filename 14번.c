#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	switch (num % 2) {
	case 0:
		printf("%d는 짝수입니다.", num);
		break;
	default:
		printf("%d는 홀수입니다.", num);
		break;
	}
}