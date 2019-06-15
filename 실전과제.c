#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char ch;

	for (;;) {
		printf("영문자를 입력하세요 : ");
		scanf(" %c", &ch);
		if (ch == 46) {
			return 0;
		}
		printf("'%c'는 ", ch);
		if (ch > 96 && ch < 122) {
			printf("소문자입니다.\n");
		}
		else if (ch > 64 && ch < 91) {
			printf("대문자입니다.\n");
		}
		else  {
			printf("영문자가 아닙니다.\n");
		}
	}

	return 0;
}