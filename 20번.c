#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i = 0, start = 0;
	char str[256];
	printf("문자열 입력: ");
	gets(str);
	int blank = 0;
	while (i < strlen(str)) {
		if (i == 0 || blank == 1) {
			if (str[i] >= 97 && str[i] <= 122) {
				str[i] -= 32;
				blank = 0;
			}
		}
		if (str[i] == ' ') {
				blank = 1;
			}
		i++;
	}
	printf("%s\n", str);
}