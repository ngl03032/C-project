#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	while (1) {
	int menu;
	printf("0.종료\n1.메뉴1\n2.메뉴2\n3.메뉴3\n>>>선택 : ");
	scanf("%d", &menu);
		switch (menu) {
		case 0:
			break;
		case 1:
			printf("메뉴1이 선택되었습니다.\n");
			break;
		case 2:
			printf("메뉴2가 선택되었습니다.\n");
			break;
		case 3:
			printf("메뉴3이 선택되었습니다.\n");
			break;
		default:
			printf("잘못된 메뉴를 선택하셨습니다.\n");
			break;
		}
	}
}