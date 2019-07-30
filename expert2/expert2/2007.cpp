#include <stdio.h>
#include <string.h>

const int MAX = 32;

int t;
char str[MAX];

bool testIfPattern(int number) {
	for (int i = 0; i<number; i++) {
		int temp = number + i;
		while (temp < 30) {
			if (str[i] != str[temp]) {
				return false;
			}
			temp += number;
		}
		if (str[i] != str[i + number]) {
			return false;
		}
	}
	return true;
}

int main() {
	scanf("%d", &t);

	for (int i = 0; i<t; i++) {
		scanf("%s", str);
		for (int j = 1; j <= 10; j++) {
			bool ans = testIfPattern(j);
			if (ans) {
				printf("#%d %d\n", i + 1, j);
				break;
			}
			if (j == 10) {
				printf("#%d 0", i + 1);
			}
		}
	}

	return 0;
}
