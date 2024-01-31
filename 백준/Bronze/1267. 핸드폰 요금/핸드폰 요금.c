#include <stdio.h>

int main() {
	int n, M = 0, Y = 0, time;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &time);

		Y += (time / 30 + 1) * 10;
		M += (time / 60 + 1) * 15;
	}

	if (M == Y) {
		printf("Y M %d", M);
	}
	else if (M > Y) {
		printf("Y %d", Y);
	}
	else {
		printf("M %d", M);
	}
}