#include<cstdio>
using namespace std;

int T;
int a;
int s;
int z[10003] = { 0, };
int x;
int main() {
	scanf("%d", &T);
	for (int j = 0; j < T; j++) {
		for (int i = 0; i < 10; i++) {
			scanf("%d", &a);
			z[i] = a;
		}
		for (int n = 0; n < 10; n++) {
			if (z[n] % 2 == 1) {
				x = z[n];
				s += x;
			}
		}
		printf("#%d %d\n", j + 1, s);
		s = 0;
		z[10003] = { 0, };
	}
}