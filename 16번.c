#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int h, m, s;

	printf("�ð��� �ʴ����� �Է��ϼ���: ");
	scanf("%d", &s);	

	h = s / 3600;	
	m = (s % 3600) / 60;
	s -= h * 3600;
	s -= m * 60;

	printf("�Է��� �ð��� %d�ð� %d�� %d���Դϴ�.", h,m,s);
}