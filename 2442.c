#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k < (n-i+1)*2;k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}