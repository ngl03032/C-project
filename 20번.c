#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a , b , c;
	int max , min ;
	printf("3개의 정수를 입력하세요.");
	scanf("%d %d %d", &a, &b, &c);
	(a > b) ? ((a > c) ? (max = a) : (max = c))
		: ((b > c) ? (max = b) : (max = c));
	(a < b) ? ((a < c) ? (min = a) : (min = c))
		: ((b < c) ? (min = b) : (min = c));
	

	printf("합계: %d", a + b + c);
	printf("평균: %d", (a + b + c)/3);
	printf("최댓값: %d", max);
	printf("최솟값: %d", min);

}