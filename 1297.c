#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int D, H, W;
    double D2;
    scanf("%d %d %d", &D, &H, &W);
    D2 = sqrt((H * H) + (W * W));
    double H1 = D * H / D2;
    double W1 = D * W / D2;
    printf("%d %d", (int)H1, (int)W1);

    return 0;
}