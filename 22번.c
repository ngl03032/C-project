#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996

int main() {
	char a[20];
	char *p = a;
	int i, j;
	printf("���ڿ��� �Է��Ͻÿ�. : \n");
	gets(a);
	printf("���� ���ڿ� : ");
	p += strlen(a);
	while (p >= a) {
		printf("%c", *p);
		p--;
	}
}