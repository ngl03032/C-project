#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int ten[10] = { 0 };
	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &ten[i]);
	}
	int plus=0, minus = 0, zero = 0;
	for (i = 0; i < 10; i++) {
		if (ten[i] < 0) {
			minus++;
		}
		if (ten[i] > 0) {
			plus++;
		}
		if(ten[i]==0) {
			zero++;
		}
	}
	printf("����� ������ %d��",plus);
	printf("������ ������ %d��",minus);
	printf("0�� ������ %d��",zero);
}