#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int menu;
	printf("1.�޴�1\n2.�޴�2\n3.�޴�3\n>>>���� : ");
	scanf("%d", &menu);
	switch (menu) {
	case 1:
		printf("�޴�1�� ���õǾ����ϴ�.");
		break;
	case 2:
		printf("�޴�2�� ���õǾ����ϴ�.");
		break;
	case 3:
		printf("�޴�3�� ���õǾ����ϴ�.");
		break;
	default:
		printf("�߸��� �޴��� �����ϼ̽��ϴ�.");
	}
}

