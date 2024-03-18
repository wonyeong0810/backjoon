#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num, i, j;

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 5 - i; j++) {
            printf("*");
        }
        if (i != num - 1) {
            printf("\n");
        }
        
    }

    return 0;
}