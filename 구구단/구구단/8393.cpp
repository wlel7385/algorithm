#include <cstdio>
using namespace std;

int main() {
	int n;
	int s[10003] = {0,};
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		s[i] = s[i - 1] + i;
		
	}
	printf("%d", s[n]);
	
}