#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996

int main() {
	char a[20] = {0};
	char *p = a;
	int i;
	int sum = 0;

	printf("���� �Է�\n");
	gets(a);

	for (i = 0; a[i] != 0; i++) {
		if (a[i] == ' ') {
			sum++;
		}
		else {
			continue;
		}
	}
	printf("������ ���� : %d\n", sum);

}