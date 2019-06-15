#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int IsLeapYear(int a) {
	int year = 0;
	if (a % 4 == 0) {
		year = 1;
	}
	else if (a % 4 && a % 100 == 0) {
		year = 0;
	}
	else if (a % 100 && a % 400 == 0) {
		year = 1;
	}
	else {
		year = 0;
	}
	return year;
}
int main() {
	int num = 0;
	printf("판단할 년도를 입력하세요.");
	scanf("%d", &num);
	printf("입력한 년도 코드는 %d입니다. (윤년: 1 , 평년: 0)", IsLeapYear(num));
	system("pause");
	return 0;
}