#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	while (1) {
			int num;
			char answer='';

			printf("정수를 입력하세요: ");
			scanf("%d", &num);

			switch (num % 2) {
			case 0:
				printf("%d는 짝수입니다.", num);
				break;
			default:
				printf("%d는 홀수입니다.", num);
				break;
			}
			printf("계속 할래? (Y or N): ");
			scanf("%c", &answer);
			if (answer == 'N') {
				break;
			}
		}

}