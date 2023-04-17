#include<stdio.h>
#include<string.h>

int main() {
	char input[1000000] = "";
	int alpha[26] = { 0 };
	int max = 0, temp = 0, index = 0;

	scanf(" %s", input);
	
	int len = strlen(input);
	
	for (int i = 0; i < len; i++)
		alpha[(input[i] >= 97) ? input[i] - 97 : input[i] - 65]++;

	for (int i = 0; i < 26; i++)
		if (max <= alpha[i]) {
			temp = max;
			max = alpha[i];
			index = i;
        }

	if (max == temp) printf("?");
	else printf("%c", 65 + index);

	return 0;
}
