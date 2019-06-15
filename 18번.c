#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {
	char arr[100], arr1[100];
	char *p = arr;
	printf("1번 저장 문자 입력\n");
	gets(arr);
	printf("2번 수장 문자 입력\n");
	gets(arr1);

	printf("입력한 문자열 %s\n",p);
	p = arr1;
	printf("바뀐 문자열 %s", p);
	return 0;

	
}