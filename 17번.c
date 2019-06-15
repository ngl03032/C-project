#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX 100
typedef enum { TRUE = 1, FALSE = 0 } boolean;

int main();
boolean IsPrime(int number);

int main() {
	int number = 0;
	int i;

	for (i = 2; i <= MAX; i++) {
		if (IsPrime(i)) { // i가 소수이면 출력
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
boolean IsPrime(int number) {
	int remainder;
	int quotient;
	int i = 2;
	int count; //약수개수

	quotient = (int)number / 2;

	while (i <= quotient) {//2부터 number보다 작거나 같은경우인 동시에 카운트가 0일동안 반복
		remainder = number % i;
		if (remainder == 0) { // 약수가 존재하면
			return FALSE; // 소수가 아님
		}
		i++;
	}
	return TRUE;
}