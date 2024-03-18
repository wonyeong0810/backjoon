// 보안 경고 무시를 위한 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, count;
	scanf("%d", &n);
	char str[51];
	i = 0;
	while (i < n)
	{
		scanf("%s", str);
		j = 0;
		count = 0;
		while (j < strlen(str))
		{
			if (str[j] == '(')
			{
				count++;
			}
			else
			{
				count--;
			}
			if (count < 0)
			{
				printf("NO\n");
				break;
			}
			j++;
		}
		if (count == 0)
			printf("YES\n");
		else if (count > 0)
			printf("NO\n");
		i++;
	}
}