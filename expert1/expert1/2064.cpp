#include<cstdio>
#include <algorithm>
using namespace std;

int N,z,temp;
int a[201] = { 0, };
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &z);
		a[i] = z;
	}
	
	sort(a, a + N);

	printf("%d\n", a[N/2]);
}