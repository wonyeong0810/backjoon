// 헤더: _CRT_SECURE_NO_WARNINGS를 정의하여 보안 경고를 무시
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int E, S, M;
	int E1 = 1, S1 = 1, M1 = 1;
	int count = 0;

	scanf("%d %d %d", &E, &S, &M);

	while (1) {

		count++;

		if (E1 == E && S1 == S & M1 == M) {
			break;
		}

		E1++;
		S1++;
		M1++;

		if (E1 > 15) {
			E1 = 1;
		}
		if (S1 > 28) {
			S1 = 1;
		}
		if (M1 > 19) {
			M1 = 1;
		}
	}

	printf("%d", count);


	return 0;
}