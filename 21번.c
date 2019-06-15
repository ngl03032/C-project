#include <stdio.h>
#pragma warning(disable:4996)
#include <limits.h>

int main() {

	char a =127;
	char b = -128;
	char c = a + 1;
	char d = b - 1;
	printf("char형의 최대값: %d\n", a);
	printf("char형의 최대값+1: %d\n", c);
	printf("char형의 최소값: %d\n", b);
	printf("char형의 최소값-1: %d\n",d);
}