#include<stdio.h>
#include<stdbool.h>

#define SIZE 1050
#define QSIZE 1000050

int head = 0, tail = 0, count = 0;
int tomato[SIZE][SIZE];
int M, N;

int vectX[4] = { 0, 0, 1, -1 };
int vectY[4] = { 1, -1, 0, 0 };

struct Node {
	int x;
	int y;
}typedef NODE;

NODE queue[QSIZE];

void enque(int y, int x) {
	NODE temp;
	temp.x = x;
	temp.y = y;
	queue[tail] = temp;
	tail++;
}

NODE deque() {
	NODE temp = queue[head];
	head++;
 	return temp;
}

bool isQueEmpty() {
	return (head == tail);
}

int BFS() {
	int x, y, nextX, nextY;

	while (!isQueEmpty()) {
		NODE temp = deque();
		x = temp.x;
		y = temp.y;

		for (int i = 0; i < 4; i++) {
			nextX = x + vectX[i];
			nextY = y + vectY[i];

			if (nextX >= 0 && nextY >= 0 && nextX < M && nextY < N) {
				if (tomato[nextY][nextX] == 0) {
					tomato[nextY][nextX] = tomato[y][x] + 1;
					enque(nextY, nextX);
					count--;
				}
			}
		}
	}

	if (count == 0) return (tomato[y][x] - 1);
	return -1;
}

int main() {
	scanf("%d %d", &M, &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &tomato[i][j]);
			if (tomato[i][j] == 0) count++;
			else if (tomato[i][j] == 1) enque(i, j);
			else continue;
		}
	}

	printf("%d\n", BFS());

	return 0;
}
