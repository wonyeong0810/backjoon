#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	int x, y;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);
		printf("yes\n");
	}

	return 0;
}