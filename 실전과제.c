#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char a = ' ';
	int b = 0;
	float c = 0;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &a);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &b);
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &c);
	printf("����:%c,����:%d,�Ǽ�:%f", a, b, c);

}