#include<stdio.h>
int main() {
	printf("Enter Number : ");
	int n;
	scanf_s("%d", &n);
	printf("Parallelogram\n");
	printf("Base = %d\n", n);
	printf("Height = %d\n", n);
	printf("Area = %d\n", n * n);
	for (int q = 1; q <= n; q++) {
		for (int b = n; b >= q; b--) {
			printf(" ");
		}
		for (int i = 1; i <= n; i++) {
			printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}