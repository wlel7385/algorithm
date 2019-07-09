#include<cstdio>
using namespace std;

int T;

int main() {
	scanf("%d", &T);
	for (int j = 0; j < T; j++) {
		int a[1003] = { 0, };
		for (int i = 0; i < 2; i++) {
			scanf("%d", &a[i]);
		}
		if (a[0] > a[1]) {
			printf("#%d >\n", j + 1);
		}
		else if (a[0] == a[1]) {
			printf("#%d =\n", j + 1);
		}
		else
			printf("#%d <\n", j + 1);
	}
}