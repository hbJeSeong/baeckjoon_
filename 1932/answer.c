#include<stdio.h>

int input[500][500] = { 0, };
int max[500][500] = { 0, };

int main() {
	int count = 0;
	int answer = 0;

	scanf(" %d", &count);

	for (int i = 0; i < count; i++)
		for (int j = 0; j <= i; j++)
			scanf(" %d ", &input[i][j]);

	max[0][0] = input[0][0];

	for (int i = 1; i < count; i++)
		for (int j = 0; j <= i; j++) {
			if (j == 0) max[i][j] = max[i - 1][j] + input[i][j];
			else if (j == i) max[i][j] = max[i - 1][j - 1] + input[i][j];
			else {
				max[i][j] = input[i][j];
				max[i][j] += (max[i - 1][j - 1] > max[i - 1][j]) ? max[i - 1][j - 1] : max[i - 1][j];
			}
		}

	for (int i = 0; i < count; i++) if (answer < max[count - 1][i]) answer = max[count - 1][i];

	printf("%d\n", answer);

	return 0;
}
