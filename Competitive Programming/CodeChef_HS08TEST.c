#include <stdio.h>
int main() {
	int X;
	float Y;
	scanf("%d %f", &X, &Y);
	if((X > 0)&&(X%5 == 0)&&(X <= (Y - 0.50))){
		Y = Y - X - 0.50;
	}
	printf("%.2f", Y);
	return 0;
}