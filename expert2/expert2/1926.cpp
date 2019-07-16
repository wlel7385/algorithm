#include <cstdio>
using namespace std;

int n;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int clab = 0;
		int c = i;
		while (c > 0) {                 
			int num = c % 10;
			c /= 10;
			if (num == 3 || num == 6 || num == 9)
				clab++;
		}
		if (clab) {
			for (int i = 0; i < clab; i++)
				printf("-");
			printf(" ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
}