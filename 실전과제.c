#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char ch;

	for (;;) {
		printf("�����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
		if (ch == 46) {
			return 0;
		}
		printf("'%c'�� ", ch);
		if (ch > 96 && ch < 122) {
			printf("�ҹ����Դϴ�.\n");
		}
		else if (ch > 64 && ch < 91) {
			printf("�빮���Դϴ�.\n");
		}
		else  {
			printf("�����ڰ� �ƴմϴ�.\n");
		}
	}

	return 0;
}