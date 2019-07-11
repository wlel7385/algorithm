#include<cstdio>
using namespace std;

int a;
int b[33] = { 0, };
int main() {
	scanf("%d", &a);
	b[0] = 1;
	for (int i = 1; i <= a; i++) {
		b[i] = b[i-1] * 2;
	}
	for (int i = 0; i <= a; i++) {
		printf("%d ", b[i]);
	}
}