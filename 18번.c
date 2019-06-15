#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char a[100] = "";
	printf("문자열을 입력하세요:");
	scanf("%s", a);
	printf("변경 후 문자열 : %s", strupr(a));
}