#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int num=0;
	printf("������ 10������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("10����:%d,8����:%o,16����:%x\n\n", num, num, num);

	printf("������ 16������ �Է��ϼ��� : ");
	scanf("%x", &num);
	printf("10����:%d,8����:%o,16����:%x\n\n", num, num, num);

	printf("������ 8������ �Է��ϼ��� : ");
	scanf("%o", &num);
	printf("10����:%d,8����:%o,16����:%x\n\n", num, num, num);

}