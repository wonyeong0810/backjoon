#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int arr[15][15] = { 0, };  // ����Ʈ�� ���� 14���� �۰ų� ���⶧���� ���� 15ũ���� 2�߹迭�� �����ϰ� 0���� �ʱ�ȭ.
    int test, h, w;

    for (int i = 0; i < 15; i++) {
        arr[0][i] = i;  // ������ ���� 0���� iȣ���� i��ŭ ��ٰ��ؼ� 0������ i������ ����.
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }  // �������� ���� ���Ĵ�� �ؿ����� 1ȣ���� �ش�ȣ���� ������� ���� arr[i][j]�� �־��ش�.
    }

    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        scanf("%d %d", &h, &w);
        printf("%d\n", arr[h][w]);
    }

    return 0;
}