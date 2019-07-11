#include<cstdio>
using namespace std;

int N;
int a[1003] = { 0, };
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			a[i-1] = i;
		}
	}
	for (int j = 0; j < N; j++) {
		if(a[j]!=0)
		printf("%d ", a[j]);
	}
}