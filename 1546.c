#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif /* _CRT_SECURE_NO_WARINGS */
#include <stdio.h>

int main()
{
    int n;
    int max = 0;
    int i;
    int first[1000];
    double chg[1000];
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &first[i]);
        if (max < first[i]) {
            max = first[i];
        }

    }

    for (i = 0; i < n; i++) {
        chg[i] = (double)first[i] / max * 100.0;
        sum += chg[i];
    }

    printf("%f", sum / n);

    return 0;
}