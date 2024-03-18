// 헤더: _CRT_SECURE_NO_WARNINGS를 정의하여 보안 경고를 무시
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("CY");
	}
	else {
		printf("SK");
	}

	return 0;
}