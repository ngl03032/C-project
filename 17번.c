#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX 100
typedef enum { TRUE = 1, FALSE = 0 } boolean;

int main();
boolean IsPrime(int number);

int main() {
	int number = 0;
	int i;

	for (i = 2; i <= MAX; i++) {
		if (IsPrime(i)) { // i�� �Ҽ��̸� ���
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
boolean IsPrime(int number) {
	int remainder;
	int quotient;
	int i = 2;
	int count; //�������

	quotient = (int)number / 2;

	while (i <= quotient) {//2���� number���� �۰ų� ��������� ���ÿ� ī��Ʈ�� 0�ϵ��� �ݺ�
		remainder = number % i;
		if (remainder == 0) { // ����� �����ϸ�
			return FALSE; // �Ҽ��� �ƴ�
		}
		i++;
	}
	return TRUE;
}