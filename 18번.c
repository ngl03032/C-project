#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	while (1) {
			int num;
			char answer='';

			printf("������ �Է��ϼ���: ");
			scanf("%d", &num);

			switch (num % 2) {
			case 0:
				printf("%d�� ¦���Դϴ�.", num);
				break;
			default:
				printf("%d�� Ȧ���Դϴ�.", num);
				break;
			}
			printf("��� �ҷ�? (Y or N): ");
			scanf("%c", &answer);
			if (answer == 'N') {
				break;
			}
		}

}