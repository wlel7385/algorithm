#include<cstdio>
using namespace std;

int main() {
	int T;
	int a, b;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
}