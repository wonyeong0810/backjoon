// ���: _CRT_SECURE_NO_WARNINGS�� �����Ͽ� ���� ��� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	int n1, n2, n3;

	scanf("%d", &N);

	n1 = N / 5;
	n2 = N / 25;
	n3 = N / 125;

	printf("%d", n1 + n2 + n3);

	return 0;
}