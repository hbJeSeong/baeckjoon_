#include<stdio.h>
int main() {
	int input = 0, answer = 0, temp = 0;

	scanf("%d", &input);
	for (int i = 0; (i * 5) <= input; i++)
		for (int j = 0; (j * 3) <= input; j++) {
			temp = i * 5 + j * 3;
			if (temp == input) answer = i + j;
			else if (temp > input) break;
		}

	printf("%d\n", (answer == 0) ? -1 : answer);
	return 0;
}
