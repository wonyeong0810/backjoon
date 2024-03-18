#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, n1, n2, n3;
	int count = 0;

	scanf("%d", &num);

	n1 = num % 10;
	n2 = num / 10;
	do {
		n3 = n1;
		n1 = n1 + n2;
		if (n1 >= 10) {
			n1 = n1 % 10;
		}
		n2 = n3;
		count++;
	} while (num != n2 * 10 + n1);

	printf("%d", count);
	

	return 0;
}