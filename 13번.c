#include <stdio.h>
#pragma warning(disable:4996)

float Absolute(float a) {
	if (a < 0) {
		a *= -1;
	}
	return a;
}

int main() {
	float num = 0;
	printf("�Ǽ� ���� �Է��ϼ��� :");
	scanf("%f",&num);
	printf("������ %f�Դϴ�.",Absolute(num));
	return 0;
}