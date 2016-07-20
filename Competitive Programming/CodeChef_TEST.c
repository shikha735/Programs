#include <stdio.h>
int main(void) {
	int num = 0;
	while(num != 42){
		scanf("%d", &num);
		if((num < 100)&&(num != 42)){
			printf("%d", num);
			printf("\n");
		}
	}
	return 0;
}