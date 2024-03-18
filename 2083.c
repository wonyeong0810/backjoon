#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char name[10];
	int age = 1, weight = 1;

	while (1)
	{
		scanf("%s %d %d",name, &age, &weight);

		if (age == 0 && weight == 0 && strcmp(name, "#") == 0) {
			break;
		}

		if (age > 17 || weight >= 80) {
			printf("%s Senior \n", name);
		}
		else {
			printf("%s Junior \n", name);
		}

		

	}

	return 0;
}