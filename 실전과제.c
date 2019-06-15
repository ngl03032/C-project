#include <stdio.h>
#pragma warning(disable:4996

int main() {
	char str[256];
	char *p = str;
	int len;

	printf("문자열을 입력하세요 : ");
	gets(str);

	len = 0;
	while (*p != 0) {
		len++;
		p++;
	}
	printf("문자열의 길이 : %d\n", len);
}