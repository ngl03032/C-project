#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a[10] = { 0 };
	int i = 0;
	int num = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("ã�� ���� :");
	scanf("%d", &num);
	for (i = 0; i < 10; i++) {
		if (num == a[i]) {
			printf("���Ҵ� �ε��� %d�� �����մϴ�.", i);
			return 0;
		}
		if (i == 10) {
			printf("�������� �ʴ� �����Դϴ�.\n");
		}
	}
}