#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int year = 0;
	printf("년도를 입력하세요: ");
	scanf("%d", &year);
	if (year % 4 == 0) {
		printf("%d년은 윤년입니다.", year);
	}
	else if (year % 4 && year % 100 == 0) {
		printf("%d년은 평년입니다.", year);
	}
	else if (year % 100 && year % 400 == 0) {
		printf("%d년은 윤년입니다.", year);
	}
	else {
		printf("%d년은 평년입니다.", year);
	}
}