#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {
	char arr[100], arr1[100];
	char *p = arr;
	printf("1�� ���� ���� �Է�\n");
	gets(arr);
	printf("2�� ���� ���� �Է�\n");
	gets(arr1);

	printf("�Է��� ���ڿ� %s\n",p);
	p = arr1;
	printf("�ٲ� ���ڿ� %s", p);
	return 0;

	
}