#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	for (;;) {
		int choice,sum,fac,i=0;
		char eng;
		printf("\n1.��ҹ��� Ȯ��\n2.Ȧ�� ¦�� Ȯ��\n3.N ���丮�� ���ϱ�(N!)\n0.����\n>>> ����: ");
		scanf("%d", &choice);
		switch (choice) {
		default: {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			break;
		}
		case 0:
			printf("����� �����մϴ�.\n");
			return 0;
			break;
		case 1:
			printf("�����ڸ� �Է��ϼ���: ");
			scanf("%s", &eng);
			if (eng > 96 && eng < 122) {
				printf("�Է��Ͻ� ���ڴ� %c, �ҹ����Դϴ�.\n", eng);
			}
			else if (eng > 64 && eng < 91) {
				printf("�Է��Ͻ� ���ڴ� %c, �빮���Դϴ�.\n", eng);
			}
			else {
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				break;
			}
			break;
		case 2:
			printf("������ �Է��ϼ���: ");
			scanf("%d", &sum);
			if (sum % 2 == 0) {
				printf("�Է��Ͻ� ������ %d, ¦���Դϴ�.\n",sum);
			}
			if (sum == 0) {
				printf("0�� Ȧ��,¦���� �Ǵ��� �� �����ϴ�.\n");
			}
			else {
				printf("�Է��Ͻ� ������ %d, Ȧ���Դϴ�.\n",sum);
			}
			break;
		case '3':
			printf("������ �Է��ϼ���:");
			scanf("%d", &fac);
			int factor = 1;
			for (i = 1; i <= fac; i++) {
				factor = factor *i;
			}
			printf("����� %d\n", factor);
			break;
		}
	}
}