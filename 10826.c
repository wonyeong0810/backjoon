// 보안 경고 무시를 위한 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	int fib, fib1, fib2;


	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		fib = fib-1 + i - 2;
	}

	printf("%d", fib);
}