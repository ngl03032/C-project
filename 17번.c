#include <stdio.h>
#pragma warning(disable:4996)
int Isprime(int num);
int Isprime(int num) {
	int i;
	for (i = 2; i <= num / 2; i++) {
		if (num%i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int arr[100] = { 0 };
	int i ,sol = 0;
	for (i = 2; sol < 100; i++) {
		if (Isprime(i))
			arr[sol++] = i;
	}
	for (i = 0; i < 100; i++) {
		printf("%d ", arr[i]);
		if (i % 10 == 9)
				printf("\n");
	}
	return 0;
}