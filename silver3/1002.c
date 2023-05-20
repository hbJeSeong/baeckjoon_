#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int func(int x1, int y1, int r1, int x2, int y2, int r2);

int main(){
	int x1, x2, y1, y2, r1, r2, num, i;
	int* answer = NULL;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		answer[i] = func(x1, y1, r1, x2, y2, r2);
	}
	
	for(i=0 ;i<num; i++) printf("%d\n", answer[i]);
}

int func(int x1, int y1, int r1, int x2, int y2, int r2){
	double difference = 0.0, distance = 0.0, sum = 0.0;
	
	sum = r1 + r2;
	difference = r1 > r2 ? r1 - r2 : r2 - r1;
	distance = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2) );

	if((difference == 0) && r1 == r2) return -1;
	else if((difference < distance) && (sum > distance)) return 2;
	else if((sum == distance) || (difference == distance)) return 1;
	else return 0;
}