#include<stdio.h>

int main() {

	int line[10] = { 0, };
	int size = 0;
  int left = 0;
  
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {

		scanf("%d", &left);

		for (int j = 0; j < size; j++) {

			if (line[j] == 0) {
				
				if (left == 0) {
					line[j] = i + 1;
					break;
        }
	else left--;
        
			}
      
		}
    
	}

	for (int i = 0; i < size; i++)
		printf("%d ", line[i]);

	return 0;
}
