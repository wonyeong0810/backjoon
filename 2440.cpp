#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	// �ﰢ���� ����ϴ� �κ��Դϴ�.
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}