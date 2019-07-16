#include<cstdio>
#include<algorithm>
using namespace std;

int T, N;

int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		int x[55] = { 0, };
		for (int j = 0; j < N; j++) {
			scanf("%d", &x[j]);
		}
		sort(x, x + N);
		printf("#%d ", i + 1);
		for (int j = 0; j < N; j++) {
			printf("%d ", x[j]);
		}
		printf("\n");
	}
	

}