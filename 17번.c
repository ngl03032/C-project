#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i=1, j = 1, k = 1;
	int num;
	int gkq=0, wkr=0, ghf=0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		gkq += i;
	}
	while (j < num) {
		ghf += j;
		j += 2;
	}
	do {
		if (k % 2 == 0)
		wkr =wkr + k;
		k++;
	} while (wkr < k);
	
	printf("1~%d������ �� : %d\n", num, gkq);
	printf("1~%d���� Ȧ���� �� : %d\n", num, ghf);
	printf("1~%d���� ¦���� �� : %d\n", num, wkr);
}