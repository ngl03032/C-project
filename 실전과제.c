
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int h, m, s;

	printf("�ð��� ��,��,�ʴ����� �Է��ϼ���: ");
	scanf("%d %d %d", &h, &m, &s);
	printf("�Է��� �ð��� %d�� �Դϴ�.", (h * 3600) + (m * 60) + (s));
}