#include<cstdio>
using namespace std;

int T,a;

int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int M = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &a);
			if (M < a) {
				M = a;
			}
		}
		printf("#%d %d\n", i + 1, M);
	}
}