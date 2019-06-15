#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	for (;;) {
		int choice,sum,fac,i=0;
		char eng;
		printf("\n1.대소문자 확인\n2.홀수 짝수 확인\n3.N 팩토리얼 구하기(N!)\n0.종료\n>>> 선택: ");
		scanf("%d", &choice);
		switch (choice) {
		default: {
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			break;
		}
		case 0:
			printf("기능을 종료합니다.\n");
			return 0;
			break;
		case 1:
			printf("영문자를 입력하세요: ");
			scanf("%s", &eng);
			if (eng > 96 && eng < 122) {
				printf("입력하신 문자는 %c, 소문자입니다.\n", eng);
			}
			else if (eng > 64 && eng < 91) {
				printf("입력하신 문자는 %c, 대문자입니다.\n", eng);
			}
			else {
				printf("잘못 입력하셨습니다.\n");
				break;
			}
			break;
		case 2:
			printf("정수를 입력하세요: ");
			scanf("%d", &sum);
			if (sum % 2 == 0) {
				printf("입력하신 정수는 %d, 짝수입니다.\n",sum);
			}
			if (sum == 0) {
				printf("0은 홀수,짝수를 판단할 수 없습니다.\n");
			}
			else {
				printf("입력하신 정수는 %d, 홀수입니다.\n",sum);
			}
			break;
		case '3':
			printf("정수를 입력하세요:");
			scanf("%d", &fac);
			int factor = 1;
			for (i = 1; i <= fac; i++) {
				factor = factor *i;
			}
			printf("결과는 %d\n", factor);
			break;
		}
	}
}