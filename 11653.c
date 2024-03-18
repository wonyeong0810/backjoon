#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			num = num / i;
			i = 1;
		}
	}

	return 0;
}