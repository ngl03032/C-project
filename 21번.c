#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int r = 0, g = 0, b = 0;
	int RGB = 0;
	printf("red���� ���� �Է��ϼ���.(0~255): ");
	scanf("%d", &r);
	printf("green���� ���� �Է��ϼ���.(0~255): ");
	scanf("%d", &g);
	printf("blue���� ���� �Է��ϼ���.(0~255): ");
	scanf("%d", &b);
	RGB = r + (g << 8) + (b << 16);
	printf("red: %x, green: %x, blue: %x\n", r, g, b);
	printf("RGB����: %x�Դϴ�.",RGB);
}