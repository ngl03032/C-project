#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int a[10] = { 0 };
	int i = 0;
	int num = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("찾을 원소 :");
	scanf("%d", &num);
	for (i = 0; i < 10; i++) {
		if (num == a[i]) {
			printf("원소는 인덱스 %d에 존재합니다.", i);
			return 0;
		}
		if (i == 10) {
			printf("존재하지 않는 원소입니다.\n");
		}
	}
}