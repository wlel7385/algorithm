#include<cstdio>
using namespace std;

int T, N,n;


int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int c[103] = { 0, };
		int m = 0;
		int num;
		scanf("%d", &num);
		for (int j = 0; j < 1000; j++) {
			scanf("%d", &n);
			c[n]++;
		}
		int p = 0;
		for (int j = 0; j <= 100; j++) {
			if (c[j] >= m) {
				m = c[j];
				p = j;
			}
		}
		printf("#%d %d\n", num, p);
	}
}