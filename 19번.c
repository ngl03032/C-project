#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, i=0;
	int factorial = 1;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		factorial= factorial*i;
	}
	printf("%d!�� ���� : %d", num, factorial);
}