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
int GetDaysOfMonth(int a,int b) {
	int days = 0;
	switch (b) {
	case 1:
		days = 31;
		break;
	case 2:
		if (IsLeapYear(a) == 1) {
			days = 29;
		}
		if (IsLeapYear(a) == 0) {
			days = 28;
		}
		break;
	case 3:
		days = 31;
		break;
	case 4:
		days = 30;
		break;
	case 5:
		days = 31;
		break;
	case 6:
		days = 30;
		break;
	case 7:
		days = 31;
		break;
	case 8:
		days = 31;
		break;
	case 9:
		days = 30;
		break;
	case 10:
		days = 31;
		break;
	case 11:
		days = 30;
		break;
	case 12:
		days = 31;
		break;
	}
	return days;
}
int main() {
	int year = 0, month = 0;
	printf("연도를 입력하세요 :");
	scanf("%d", &year);
	printf("몇월달인지 입력하세요 : ");
	scanf("%d", &month);
	printf("%d년 %d월은 %d일까지 있습니다.", year, month, GetDaysOfMonth(year, month));
	system("pause");
}