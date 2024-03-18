#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int h, m;

	scanf("%d %d", &h, &m);

	

	if (m < 45) {
		h--;
		m = m + 60 - 45;
	}
	else {
		m -= 45;
	}
	
	if (h < 0) {
		h = 23;
	}

	printf("%d %d", h, abs(m));

	return 0;
}