#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996

int main() {
	int a = 0, i = 0;
	int arr[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int *p = arr;
	printf("����ġ�� �Է��ϼ���. : \n");
	scanf("%d", &a);
	printf("���� �迭: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		*(p+i) += a;
	}
	printf("\n�߰� �� �迭");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}