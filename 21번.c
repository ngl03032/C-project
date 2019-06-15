#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996

int main() {
	int a = 0, i = 0;
	int arr[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int *p = arr;
	printf("증가치를 입력하세요. : \n");
	scanf("%d", &a);
	printf("원본 배열: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	for (i = 0; i < 10; i++) {
		*(p+i) += a;
	}
	printf("\n중가 후 배열");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}