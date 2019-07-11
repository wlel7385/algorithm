#include<cstdio>
using namespace std;

int T,sum;
int main() {
	scanf("%d",&T);
	for (int i = 1; i <= T; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}