#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int h, m, s;

	printf("시간을 초단위로 입력하세요: ");
	scanf("%d", &s);	

	h = s / 3600;	
	m = (s % 3600) / 60;
	s -= h * 3600;
	s -= m * 60;

	printf("입력한 시간은 %d시간 %d분 %d초입니다.", h,m,s);
}