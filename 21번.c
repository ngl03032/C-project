#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int r = 0, g = 0, b = 0;
	int RGB = 0;
	printf("red색상 값을 입력하세요.(0~255): ");
	scanf("%d", &r);
	printf("green색상 값을 입력하세요.(0~255): ");
	scanf("%d", &g);
	printf("blue색상 값을 입력하세요.(0~255): ");
	scanf("%d", &b);
	RGB = r + (g << 8) + (b << 16);
	printf("red: %x, green: %x, blue: %x\n", r, g, b);
	printf("RGB값은: %x입니다.",RGB);
}