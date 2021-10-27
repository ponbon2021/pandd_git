#include <stdio.h>

int main() {
	int a, b, power;
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

	if (c == '^') {
		power = a;
		for (int i = 1; i < b; i++) {
			power *=  a;
		}
		printf("%d\n", power);
	}
	return 0;
}