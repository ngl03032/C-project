#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char a[256];
	char result[256] = "";
	int i, j;
	printf("���ڿ��� �Է��ϼ���: ");
	gets(a);
	for (i = 0, j = 0; a[i] != 0; i++, j++) {
		if (a[i] != ' ') {
			result[j]=a[i];
		}
		else if (a[i] == ' ') {
			result[j]=a[i + 1];
			i++;
		}
	}
	printf("%s�� ���鹮�� ���� : \n%s\n", a, result);
}