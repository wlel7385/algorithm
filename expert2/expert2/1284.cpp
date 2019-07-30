#include<cstdio>
using namespace std;

int T;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int P=0, Q=0, R=0, S=0, W=0;
		scanf("%d%d%d%d%d", &P,&Q,&R,&S,&W);
		if (R > W) {
			if (P*W < Q) {
				printf("#%d %d\n",i+1, P*W);
			}
			else {
				printf("#%d %d\n",i+1, Q);
			}
		}
		else{
			if (P*W < Q + ((W - R)*S)) {
				printf("#%d %d\n",i+1, P*W);
			}
			else {
				printf("#%d %d\n", i + 1, Q+((W -R)*S));
			}
		}

	}
}