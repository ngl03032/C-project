#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	while (1) {
	int menu;
	printf("0.����\n1.�޴�1\n2.�޴�2\n3.�޴�3\n>>>���� : ");
	scanf("%d", &menu);
		switch (menu) {
		case 0:
			break;
		case 1:
			printf("�޴�1�� ���õǾ����ϴ�.\n");
			break;
		case 2:
			printf("�޴�2�� ���õǾ����ϴ�.\n");
			break;
		case 3:
			printf("�޴�3�� ���õǾ����ϴ�.\n");
			break;
		default:
			printf("�߸��� �޴��� �����ϼ̽��ϴ�.\n");
			break;
		}
	}
}