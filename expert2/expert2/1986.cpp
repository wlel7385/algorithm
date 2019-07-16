#include<cstdio>
using namespace std;

int T,N,s1,s2;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j = 1; j <= N; j++) {
			if (j % 2 >0) {
				s1 += j;
			}
			else
				s2 += j;
		}
		printf("#%d %d\n",i+1, s1 - s2);
		s1 = 0, s2 = 0;
	}
}