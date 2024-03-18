#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int t;
	int x, y;
	int gcd, lcm;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);

		for (int j = 1; j <= x; j++) {
			if (x % j == 0 && y % j == 0) {
				gcd = j;
			}
		}

		lcm = x * y / gcd;

		printf("%d\n", lcm);
	}

	return 0;
}