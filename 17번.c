#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int year = 0;
	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year);
	if (year % 4 == 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	else if (year % 4 && year % 100 == 0) {
		printf("%d���� ����Դϴ�.", year);
	}
	else if (year % 100 && year % 400 == 0) {
		printf("%d���� �����Դϴ�.", year);
	}
	else {
		printf("%d���� ����Դϴ�.", year);
	}
}