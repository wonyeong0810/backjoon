#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char sentence[1000000];
	int word = 1;

	scanf("%[^\n]", &sentence);


	for (int i = 0; i < strlen(sentence); i++){
		if (sentence[0] == 32 && i == 0)
		{
			word--;
		}
		if (sentence[i] == 32 && i == strlen(sentence)-1) {
			word = word;
		}
		else if (sentence[i] == 32)
		{
			word++;
		}
	}

	if (strlen(sentence) == 1) {
		if (sentence[0] == 32)
		{
			word = 0;
		}
	}

	printf("%d", word);


	return 0;
}