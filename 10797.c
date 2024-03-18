#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int day;
	int car1, car2, car3, car4, car5;
	int count = 0;

	scanf("%d", &day);
	scanf("%d %d %d %d %d", &car1, &car2, &car3, &car4, &car5);
	
	if (car1 == day) {
		count++;
	}
	if (car2 == day) {
		count++;
	}
	if (car3 == day) {
		count++;
	}
	if (car4 == day) {
		count++;
	}
	if (car5 == day) {
		count++;
	}

	printf("%d", count);
}