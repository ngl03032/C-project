#include <stdio.h>
#pragma warning(disable:4996

int main() {
	char str[256];
	char *p = str;
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	len = 0;
	while (*p != 0) {
		len++;
		p++;
	}
	printf("���ڿ��� ���� : %d\n", len);
}