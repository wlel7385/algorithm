#include<cstdio>
using namespace std;

int T;
int L, U, X;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &L, &U, &X);
		if (L > X) {
			printf("#%d %d\n",i+1, L - X);
		}
		else if (U < X) {
			printf("#%d -1\n",i+1);
		}
		else {
			printf("#%d 0\n",i+1);
		}
	}
}