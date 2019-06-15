#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a = 2;
	printf("2ÀÇ 5½ÂÀº: %d\n", a<<4);
	printf("2ÀÇ 10½ÂÀº: %d\n", a << 9);
	printf("2ÀÇ 15½ÂÀº: %d\n", a << 14);
	printf("2ÀÇ 20½ÂÀº: %d\n", a << 19);
	printf("2ÀÇ 25½ÂÀº: %d\n", a << 24);
	printf("2ÀÇ 30½ÂÀº: %d\n", a << 29);

	
}
