#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	do
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
		{
			break;
		}

		if (a > b)
		{
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}

	} while (a, b <= 1000000);

	return 0;
}