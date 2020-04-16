#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b;
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	if (a>b){
		printf("%.2f\n", a);
} else {
		printf("%.2f\n", b);
}
	return 0;
}
