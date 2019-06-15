#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a = 0;
	printf("제품의 크기를 입력하세요(inch): ");
	scanf("%d", &a);
	printf("%d인치인 제품의 크기는 %fcm이기도 합니다.", a, a * 2.54);
}