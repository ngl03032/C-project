#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a = 0;
	printf("��ǰ�� ũ�⸦ �Է��ϼ���(inch): ");
	scanf("%d", &a);
	printf("%d��ġ�� ��ǰ�� ũ��� %fcm�̱⵵ �մϴ�.", a, a * 2.54);
}