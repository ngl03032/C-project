#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int Power(int x, int y) {
	int result = 1;
	int i = 0;
	while (i < y) {
		result *= x;
		i++;
	}
	return result;
}
int main() {
	int x=0, y=0;
	printf("x , y ют╥б : ");
	scanf("%d %d",&x,&y);
	int result = 0;
	result = Power(x, y);
	printf("%d\n", result);
	system("pause");
	return 0;
}