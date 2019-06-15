#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char arr1[100], arr2[100];
	char *p1 = arr1;
	char *p2 = arr2;
	int i = 0;

	printf("문자 입력: \n");
	gets(arr1);
	printf("두번째 문자열입력: \n");
	gets(arr2);
	while (i <= 100) {
		if ((p1[i] - p2[i] == 0) || p1[i] - p2[i] == 32) {
			printf("%s 와(과) %s 는(은) 같습니다.", arr1, arr2);
			i++;
			break;
		}
		else {
			printf("%s 와(과) %s 는(은) 다릅니다", arr1, arr2);
			break;
		}
	}
}