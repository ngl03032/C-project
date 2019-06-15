#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int x1, x2, y1, y2;
	int width;
	int height;
	int area;
	int perimeter;

	printf("ÁÂÇ¥ ÀÔ·Â x1, y1, x2, y2 ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	width = GetRectWidth(x1, x2);
	height = GetRectHeight(y1, y2);
	area = GetRectArea(x1, y1, x2, y2);
	perimeter = GetRectPerimeter(x1, y1, x2, y2);

	printf("Æø :%d ³ôÀÌ :%d ¸éÀû :%d µÑ·¹ :%d\n", width, height, area, perimeter);
	system("pause");
	return 0;
}

int GetRectWidth(int x1, int x2) {
	if (x1 > x2) {
		return x1 - x2;
	}
	else {
		return x2 - x1;
	}
}
int GetRectHeight(int y1, int y2) {
	if (y1 > y2) {
		return y1 - y2;
	}
	else {
		return y2 - y1;
	}

}
int GetRectArea(int x1, int y1, int x2, int y2) {
	int area;

	area = (x1 - x2)*(y1 - y2);
	if (area < 0) {
		area *= -1;
	}
	return area;
}
int GetRectPerimeter(int x1, int y1, int x2, int y2) {
	int width;
	int height;
	int result;

	width = GetRectWidth(x1, x2);
	height = GetRectHeight(y1, y2);
	result = (2 * width) + (2 * height);
	return result;
}