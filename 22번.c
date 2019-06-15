#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996

int main() {
	char a[20];
	char *p = a;
	int i, j;
	printf("문자열을 입력하시오. : \n");
	gets(a);
	printf("역순 문자열 : ");
	p += strlen(a);
	while (p >= a) {
		printf("%c", *p);
		p--;
	}
}