#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char a[100] = "";
	printf("���ڿ��� �Է��ϼ���:");
	scanf("%s", a);
	printf("���� �� ���ڿ� : %s", strupr(a));
}