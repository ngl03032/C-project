#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	switch (num % 2) {
	case 0:
		printf("%d�� ¦���Դϴ�.", num);
		break;
	default:
		printf("%d�� Ȧ���Դϴ�.", num);
		break;
	}
}