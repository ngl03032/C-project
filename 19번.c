#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char arr1[100], arr2[100];
	char *p1 = arr1;
	char *p2 = arr2;
	int i = 0;

	printf("���� �Է�: \n");
	gets(arr1);
	printf("�ι�° ���ڿ��Է�: \n");
	gets(arr2);
	while (i <= 100) {
		if ((p1[i] - p2[i] == 0) || p1[i] - p2[i] == 32) {
			printf("%s ��(��) %s ��(��) �����ϴ�.", arr1, arr2);
			i++;
			break;
		}
		else {
			printf("%s ��(��) %s ��(��) �ٸ��ϴ�", arr1, arr2);
			break;
		}
	}
}