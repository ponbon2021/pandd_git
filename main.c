#include <stdio.h>

int main() {
	int a, b,i, n=1, r=1;
	char c;


	scanf("%d %c %d", &a, &c, &b);

	if (c == '+') {
		printf("%d\n", a + b);
	}

	if (c == '-') {
		printf("%d\n", a - b);
	}

	if (c == '*') {
		printf("%d\n", a * b);
	}
	if (c == '/') {
		printf("%d\n", a / b);
	}
	if (c == 'p') {
		for (i = 1; i <= a; i++) {
			n *= i;
		}
		for (i = 1; i <= a - b; i++) {
			r *= i;
		}
		printf("%f\n", (double)n / r);
		printf("%d\n",)
	}

	return 0;
}