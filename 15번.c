#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char a[10];
	scanf("%s", a);
	printf("%s", strrev(a));
}