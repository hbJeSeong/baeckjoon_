// Baekjoon
// IDE : Visual Studio Community
#include<stdio.h>
#include<stdlib.h>

int main() {

	int input = 0;
	int* data = NULL;

	int array[] = { 1, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155 };


	scanf_s("%d", &input);
	data = (int*)malloc(sizeof(int) * input);

	for (int i = 0; i < input; i++) {
		scanf_s("%d", &data[i]);
	}

	for (int i = 0; i < input; i++) {
		printf("%d %d\n", array[data[i]], array[data[i] + 1]);
	}

	return 0;
}
