#include<stdio.h>

int main(){
	int input = 0;
	scanf("%d",&input);
	int num;
	int count[10001] = {0,};
	
	for(int i=0;i<input;i++){
		scanf("%d",&num);
		count[num]++;
	}
	
	for(int i=1;i<10001;i++)
		for(int j=1;j<=count[i];j++) printf("%d\n",i);

    return 0;
}
