#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a , b , c;
	int max , min ;
	printf("3���� ������ �Է��ϼ���.");
	scanf("%d %d %d", &a, &b, &c);
	(a > b) ? ((a > c) ? (max = a) : (max = c))
		: ((b > c) ? (max = b) : (max = c));
	(a < b) ? ((a < c) ? (min = a) : (min = c))
		: ((b < c) ? (min = b) : (min = c));
	

	printf("�հ�: %d", a + b + c);
	printf("���: %d", (a + b + c)/3);
	printf("�ִ�: %d", max);
	printf("�ּڰ�: %d", min);

}