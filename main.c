#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b;
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	if (a>b){
		printf("%f\n", a);
} else {
		printf("%f\n", b);
}
	return 0;
}
