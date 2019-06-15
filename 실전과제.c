
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int h, m, s;

	printf("시간을 시,분,초단위로 입력하세요: ");
	scanf("%d %d %d", &h, &m, &s);
	printf("입력한 시간은 %d초 입니다.", (h * 3600) + (m * 60) + (s));
}