#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef enum { TRUE = 1, FALSE = 0 } boolean;

int main();
boolean IsLower(char lettter);
boolean IsUpper(char letter);
boolean IsAlphbetci(char letter);

int main() {
	char letter;

	printf("문자 입력: ");
	letter = getchar();

	if (IsAlphbetci(letter)) {
		printf("알파벳입니다\n");
	}
	else {
		printf("알파벳이 아닙니다");
	}
	system("pause");
	return 0;
}

boolean IsLower(char letter) {
	if (letter >= 'a' && letter <= 'z') {
		printf("소문자입니다.\n");
		return TRUE;
	}
	return FALSE;
}
boolean IsUpper(char letter) {
	if (letter >= 'A' && letter <= 'Z') {
		printf("대문자입니다.\n");
		return TRUE;
	}
	return FALSE;

}
boolean IsAlphbetci(char letter) {
	if (IsLower(letter) || IsUpper(letter)) {
		return TRUE;
	}
	return FALSE;
}
