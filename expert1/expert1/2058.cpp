#include <cstdio>
using namespace std;

int a;
int main() {
	scanf("%d", &a);
	int b = a / 1000;
	int c = (a - b * 1000) / 100;
	int d = (a - b * 1000 - c * 100) / 10;
	int e = a - b * 1000 - c * 100 - d * 10;
	printf("%d\n", b + c + d + e);
}