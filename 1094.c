#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int S = 64, X;
	int count = 0;

	scanf("%d", &X);

	while (X > 0) {

		if (S > X) {
			S /= 2;
		}
		else {
			count++;
			X -= S;
		}
	}

	printf("%d", count);

	return 0;
}