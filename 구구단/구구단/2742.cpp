#include<cstdio>
using namespace std;

int n;
int a[100003] = { 0, };
int main() {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	for (int j = n-1; j >= 0; j--) {
		printf("%d\n", a[j]);
	}
}