#include <stdio.h>
#pragma warning(disable:4996)
#include <limits.h>

int main() {

	char a =127;
	char b = -128;
	char c = a + 1;
	char d = b - 1;
	printf("char���� �ִ밪: %d\n", a);
	printf("char���� �ִ밪+1: %d\n", c);
	printf("char���� �ּҰ�: %d\n", b);
	printf("char���� �ּҰ�-1: %d\n",d);
}