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
	printf("�Ǵ��� �⵵�� �Է��ϼ���.");
	scanf("%d", &num);
	printf("�Է��� �⵵ �ڵ�� %d�Դϴ�. (����: 1 , ���: 0)", IsLeapYear(num));
	system("pause");
	return 0;
}