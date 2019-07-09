#include<cstdio>
using namespace std;

int T,a,sum;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &a);
			sum += a;
		}
		printf("#%d %d\n", i+1,(sum+5) / 10);
		sum = 0;
		}
	}